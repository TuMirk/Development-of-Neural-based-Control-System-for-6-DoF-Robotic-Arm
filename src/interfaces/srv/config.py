import os
import sys
from dynamixel_sdk import *                    # Uses Dynamixel SDK library
import time

# Control table address (for Protocol 2.0)
ADDR_VELOCITY_LIMIT     = 44
ADDR_GOAL_VELOCITY      = 104
ADDR_PROFILE_VELOCITY   = 112
ADDR_GOAL_POSITION      = 116
ADDR_PRESENT_POSITION   = 132
ADDR_TORQUE_ENABLE      = 64
LOCK_TORQUE             = 1
UNLOCK_TORQUE           = 0
# Protocol version
PROTOCOL_VERSION        = 2.0
# Default setting
DXL_ID                  = [0,1,2,3,4,5]  # Dynamixel motor IDs
BAUDRATE                = 1000000           # Dynamixel default baudrate
DEVICENAME              = '/dev/ttyUSB1'    # e.g., COM3 on Windows or /dev/ttyUSB0 on Linux

# Initialize PortHandler & PacketHandler
portHandler = PortHandler(DEVICENAME)
packetHandler = PacketHandler(PROTOCOL_VERSION)

for id in DXL_ID:
    # Open port
    if not portHandler.openPort():
        print(f"Failed to open the port for motor {id}")
        sys.exit(1)

    # Set baudrate
    if not portHandler.setBaudRate(BAUDRATE):
        print(f"Failed to set baudrate for motor {id}")
        sys.exit(1)

    # Set velocity limit
    velocity_limit = 10  # Example value, adjust as needed

    comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_VELOCITY_LIMIT, velocity_limit)    
    if comm_result != COMM_SUCCESS:
        print(f"Error setting velocity limit for motor {id}: {packetHandler.getTxRxResult(comm_result)}")
    elif error != 0:
        print(f"Error setting velocity limit for motor {id}: {packetHandler.getRxPacketError(error)}")
    else:
        print(f"Motor {id} velocity limit set to {velocity_limit}")

    # comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_GOAL_VELOCITY, velocity_limit)    
    # if comm_result != COMM_SUCCESS:
    #     print(f"Error setting goal velocity for motor {id}: {packetHandler.getTxRxResult(comm_result)}")
    # elif error != 0:
    #     print(f"Error setting goal velocity limit for motor {id}: {packetHandler.getRxPacketError(error)}")
    # else:
    #     print(f"Motor {id} goal velocity limit set to {velocity_limit}")

    comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_PROFILE_VELOCITY, velocity_limit)    
    if comm_result != COMM_SUCCESS:
        print(f"Error setting profile velocity for motor {id}: {packetHandler.getTxRxResult(comm_result)}")
    elif error != 0:
        print(f"Error setting profile velocity for motor {id}: {packetHandler.getRxPacketError(error)}")
    else:
        print(f"Motor {id} profile velocity set to {velocity_limit}")

    # comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_TORQUE_ENABLE, LOCK_TORQUE)

    # comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_GOAL_POSITION, 1024)
    # if comm_result != COMM_SUCCESS:
    #     print(f"Error setting goal position for motor {id}: {packetHandler.getTxRxResult(comm_result)}")
    # elif error != 0:
    #     print(f"Error setting goal position for motor {id}: {packetHandler.getRxPacketError(error)}")
    # else:
    #     print(f"Motor {id} goal position set to 1024")

time.sleep(5)
comm_result, error = packetHandler.write4ByteTxRx(portHandler, id, ADDR_TORQUE_ENABLE, UNLOCK_TORQUE)
    

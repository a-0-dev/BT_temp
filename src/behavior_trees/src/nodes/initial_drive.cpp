/*
    --- Node description ---
    Used in: Obstacles, Parking
    Activation: On system startup
    Termination: Crossing of chequered start line
    Contains: Driving straight forward, waiting for start line
    Child nodes: -/-
*/

#include <initial_drive.h>
#include <string>

NODE_INITIAL_DRIVE::InitialDrive(std::string name) : ActionNode::ActionNode(name)
{
    thread_ = std::thread(&ActionTestNode::WaitForTick, this);
}

NODE_INITIAL_DRIVE::InitialDrive::~InitialDrive() {}

void NODE_INITIAL_DRIVE::InitialDrive::start() {
    this.started = true;
    //Notify other controls: (adjust wheels to straight forward), start driving, wait for chequered line
}

void NODE_INITIAL_DRIVE::InitialDrive::WaitForTick()
{
    while (true)
    {
        // Waiting for the first tick to come
        DEBUG_STDOUT(get_name() << " WAIT FOR TICK");

        tick_engine.Wait();
        DEBUG_STDOUT(get_name() << " TICK RECEIVED");

        // Running state
        set_status(BT::RUNNING);
        // Perform action...

        while (get_status() != BT::HALTED)
        {
	/*HERE THE CODE TO EXECUTE FOR THE ACTION.
	 wHEN THE ACTION HAS FINISHED CORRECLTY, CALL set_status(BT::SUCCESS)
	IF THE ACTION FAILS, CALL set_status(BT::FAILURE)*/
        }
    }
}

void NODE_INITIAL_DRIVE::InitialDrive::Halt()
{
    /*HERE THE CODE TO PERFORM WHEN THE ACTION IS HALTED*/
    set_status(BT::HALTED);
    DEBUG_STDOUT("HALTED state set!");
}

BT::ReturnStatus NODE_INITIAL_DRIVE::InitialDrive::Tick() {
  return BT::EXIT;
}

int NODE_INITIAL_DRIVE::InitialDrive::DrawType() {
  return BT::ACTION;
}

void NODE_INITIAL_DRIVE::InitialDrive::execute_callback(const behavior_tree_core::BTGoalConstPtr& ptr) {

}

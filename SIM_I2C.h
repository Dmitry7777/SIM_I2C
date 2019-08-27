#ifndef SIM_CARD_H
#define SIM_CARD_H

#define CPU_SIM_CARD_SDA INPUT
#define CPU_SIM_CARD_SDA OUTPUT
#define CPU_SIM_CARD_SCL OUTPUT
#define CPU_SIM_CARD_RESET OUTPUT

int PROCESS_SIM_CARD_SDA; //
int PROCESS_SIM_CARD_SCL; //
int PROCESS_SIM_CARD_RESET; //
int PROCESS_ControlSIM_Card; //

class SIM_Card
{
  public:
  SIM_Card(uint16_t SDA, uint16_t SCL, uint16_t RESET){
  PROCESS_SIM_CARD_SDA = SDA; //
  PROCESS_SIM_CARD_SCL = SCL; //
  PROCESS_SIM_CARD_RESET = RESET; //
  pinMode(SDA, CPU_SIM_CARD_SDA); //
  pinMode(SCL, CPU_SIM_CARD_SCL); //
  pinMode(RESET, CPU_SIM_CARD_RESET); //
  shiftOut(SDA, SCL, RESET, PROCESS_ControlSIM_Card); //
  PROCESS_ControlSIM_Card = shiftIn(SDA, SCL, RESET); //
  }
  void begin(){
    
  }
  void end(){
    
  }
  void read(){
    
  }
  void write(){
    
  }
  void receive(){
    
  }
  void send(){
    
  }
  void isSent(){
    
  }
  void call(){
    
  }
  void SavingSMS(){
    
  }
  void MemorySize(){
    
  }
  
  private:
  int _PROCESS_ControlSIM_Card; //
  
  protected:
};

#endif

class base { //基底クラス
  public:
    virtual void print() {
      Serial.println("基底");
    }
};

class hoge0 : public base { //派生クラス0
  public:
    void print() {
      Serial.println("派生0");
    }
};

class hoge1 : public base { //派生クラス1
  public:
    void print() {
      Serial.println("派生1");
    }
};

class hoge2 : public base { //派生クラス2
  public:
    void print() {
      Serial.println("派生2");
    }
};

base *obj;
void setup() {
  Serial.begin(115200);
//  obj = new hoge0;
  obj = new hoge1;
//  obj = new hoge2;
}

void loop() {
  obj->print();
  delay(10);
}

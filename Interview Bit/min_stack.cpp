vector<int>s1,s2;
MinStack::MinStack() {
    s1.clear();
    s2.clear();
}

void MinStack::push(int x) {

    s1.push_back(x);
    if(s2.size()>0 && s2[s2.size()-1] >= s1[s1.size()-1])
        s2.push_back(x);
    else if(s2.size()<=0)
        s2.push_back(x);
    else
        s2.push_back(s2[s2.size()-1]);

}

void MinStack::pop() {
    if(s1.size()>0){
        s1.pop_back();
        s2.pop_back();
    }

}

int MinStack::top() {
    if(s1.size()>0){
        return s1[s1.size()-1];
    }
    return -1;
}

int MinStack::getMin() {
    if(s2.size()<=0)
        return -1;
    return s2[s2.size()-1];
}

//very good qsn, i took a lot of time coz firstly my code was right(i saw soln, and lil g4g) and when i did independent custom test case it was working fine but when i submitted it, it was giving wrong ans
//this usually happens coz online judges run the code on many test case, so you need ot ensure that before each test case your variables are empty and don contain prior data :P
//that too here i have used global variables, thats why they have given constructor to clear the variables

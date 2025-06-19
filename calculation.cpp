#include <iostream>
using namespace std;

class Common{
    int sicis , sices , sictw , sicatt , sicie ;
    int oopis , oopes , ooptw , oopatt , oopcie ;
    int ccatw;
    protected:
    float totalsic , totaloopc , totaloopcl , totalsictut , totalcca;
    float TotalEarned;
    float sgpa;
    int creditSIC = 3;
    int creditSICT = 1;
    int creditOOPC = 2;
    int creditOOPCL = 1;
    int creditCCA = 1;
    int Total = 200;

    public:
    
    void input(){
        cout<<"Enter details for Sic:"<<endl;
        cout<<"Insem:";
        cin>>sicis;
        cout<<"endsem:";
        cin>>sices;
        cout<<"CIE:";
        cin>>sicie;
        cout<<"TermWork:";
        cin>>sictw;
        cout<<"Attendance:";
        cin>>sicatt;
        cout<<endl;
        cout<<"Enter details for OOPC:"<<endl;
        cout<<"Insem:";
        cin>>oopis;
        cout<<"endsem:";
        cin>>oopes;
        cout<<"CIE:";
        cin>>oopcie;
        cout<<"TermWork:";
        cin>>ooptw;
        cout<<"Attendance:";
        cin>>oopatt;
        cout<<endl;
        cout<<"Enter termwork marks for CCA:";
        cin>>ccatw;
        cout<<endl;
    }

    int checkcredit(float n){
        if(n>90 && n<=100) return 10;
        else if(n>80 && n<=90) return 9;
        else if(n>70 && n<=80) return 8;
        else if(n>60 && n<=70) return 7;
        else if(n>50 && n<=60) return 6;
        else if(n>=45 && n<=50) return 5;
        else if(n>=40 && n<=44) return 4;
        else return 0;
    }

    void calculate(){
        totalsic = checkcredit( sicatt + sicie + (sicis * (20.0/30.0)) + (sices * (60.0/70.0)));
        totaloopc = checkcredit( oopatt + oopcie + (oopis * (20.0/30.0)) + (oopes * (60.0/70.0)));
        totaloopcl = checkcredit( ooptw *4);
        totalsictut = checkcredit( sictw*4);
        totalcca = checkcredit( ccatw *4);
    }

    void Sgpa(){
        sgpa = (TotalEarned / Total)*10 ;
        cout<<"Total credit earned are : "<<TotalEarned<<endl;
        cout<<"Your SGPA is "<<sgpa<<endl;
    }
};

class Group1 : public Common{
    int cstis , cstes , cstcie , csttw , cstatt ;
    int cgdis , cgdes , cgdcie , cgdtw , cgdatt ;
    int eseis , esees , esecie , eseatt ;
    int iidtltw;
    int sstw , ssatt , sscie;
    int npteltw;
    float totalcst , totalcstl;
    float totalcgd , totalcgdl;
    float totalese , totaliidtl;
    float totalss , totalsstw;
    float totalnptel ;
    int creditCST = 2;
    int creditCSTL =1;
    int creditCGD = 2;
    int creditCGDL =1;
    int creditESE = 2;
    int creditIIDTL =1;
    int creditSS = 1;
    int creditSSTW = 1;
    int creditNPTEL = 1;
    public:
    
    void getinfo(){
        Common::input();
        cout<<"Enter details for cst:"<<endl;
        cout<<"Insem:";
        cin>>cstis;
        cout<<"endsem:";
        cin>>cstes;
        cout<<"CIE:";
        cin>>cstcie;
        cout<<"TermWork:";
        cin>>csttw;
        cout<<"Attendance:";
        cin>>cstatt;
        cout<<endl;
        cout<<"Enter details for ese:"<<endl;
        cout<<"Insem:";
        cin>>eseis;
        cout<<"endsem:";
        cin>>esees;
        cout<<"CIE:";
        cin>>esecie;
        cout<<"Attendance:";
        cin>>eseatt;
        cout<<endl;
        cout<<"Enter details for cgd:"<<endl;
        cout<<"Insem:";
        cin>>cgdis;
        cout<<"endsem:";
        cin>>cgdes;
        cout<<"CIE:";
        cin>>cgdcie;
        cout<<"TermWork:";
        cin>>cgdtw;
        cout<<"Attendance:";
        cin>>cgdatt;
        cout<<endl;
        cout<<"Enter details for Soft Skills:"<<endl;
        cout<<"CIE:";
        cin>>sscie;
        cout<<"TermWork:";
        cin>>sstw;
        cout<<"Attendance:";
        cin>>ssatt;
        cout<<endl;
        cout<<"Enter termwork marks for IIDTL:";
        cin>>iidtltw;
        cout<<endl;
        cout<<"Enter termwork marks for NPTEL:";
        cin>>npteltw;
        cout<<endl;
    }

    void calculate(){
        Common::calculate();
        totalcst = checkcredit( cstatt + cstcie + (cstis * (20.0/30.0)) + (cstes * (60.0/70.0)) );
        totalcgd = checkcredit( cgdatt + cgdcie + (cgdis * (20.0/30.0)) + (cgdes * (60.0/70.0)));
        totalcstl = checkcredit( csttw *4);
        totalcgdl = checkcredit( cgdtw*4);
        totalese = checkcredit( eseatt + esecie + (eseis * (20.0/30.0)) + (esees * (60.0/70.0)));
        totaliidtl = checkcredit( iidtltw *2);
        totalnptel = checkcredit( npteltw*4);
        totalss  = checkcredit( (ssatt + sscie )*4);
        totalsstw = checkcredit (sstw*4);
    }

    void totalcredit(){
        TotalEarned = totalsic*creditSIC + totalsictut*creditSICT + totaloopc*creditOOPC + totaloopcl*creditOOPCL + totalcst*creditCST + totalcstl*creditCSTL +totalcgd*creditCGD + totalcgdl*creditCGDL +totalese*creditESE + totaliidtl*creditIIDTL +totalnptel*creditNPTEL + totalss*creditSS + totalsstw*creditSSTW +totalcca*creditCCA;
    }

};

class Group2 : public Common{
    int qpis , qpes , qpcie , qptw , qpatt ;
    int ieeeis , ieeees , ieeecie , ieeetw , ieeeatt ;
    int mfris , mfres , mfrcie , mfratt , mfrtw ;
    int fabtw;
    int ikstw , iksatt , ikscie;
    float totalQP , totalQPl;
    float totalieee , totalieeel;
    float totalmfr , totalfab;
    float totaliks , totalikstw;
    float totalmfrl ;
    int creditQP = 2;
    int creditQPL =1;
    int creditieee = 2;
    int creditieeeL =1;
    int creditmfr = 2;
    int creditfab =1;
    int creditiks = 1;
    int creditiksTW = 1;
    int creditmfrl = 1;
    public:

    void getinfo(){
        Common::input();
        cout<<"Enter details for qp:"<<endl;
        cout<<"Insem:";
        cin>>qpis;
        cout<<"endsem:";
        cin>>qpes;
        cout<<"CIE:";
        cin>>qpcie;
        cout<<"TermWork:";
        cin>>qptw;
        cout<<"Attendance:";
        cin>>qpatt;
        cout<<endl;
        cout<<"Enter details for mfr:"<<endl;
        cout<<"Insem:";
        cin>>mfris;
        cout<<"endsem:";
        cin>>mfres;
        cout<<"CIE:";
        cin>>mfrcie;
        cout<<"TermWork:";
        cin>>mfrtw;
        cout<<"Attendance:";
        cin>>mfratt;
        cout<<endl;
        cout<<"Enter details for ieee:"<<endl;
        cout<<"Insem:";
        cin>>ieeeis;
        cout<<"endsem:";
        cin>>ieeees;
        cout<<"CIE:";
        cin>>ieeecie;
        cout<<"TermWork:";
        cin>>ieeetw;
        cout<<"Attendance:";
        cin>>ieeeatt;
        cout<<endl;
        cout<<"Enter details for IKS:"<<endl;
        cout<<"CIE:";
        cin>>ikscie;
        cout<<"TermWork:";
        cin>>ikstw;
        cout<<"Attendance:";
        cin>>iksatt;
        cout<<endl;
        cout<<"Enter termwork marks for fab:";
        cin>>fabtw;
        cout<<endl;
    }

    void calculate(){
        Common::calculate();
        totalQP = checkcredit( qpatt + qpcie + (qpis * (20.0/30.0)) + (qpes * (60.0/70.0)) );
        totalieee = checkcredit( ieeeatt + ieeecie + (ieeeis * (20.0/30.0)) + (ieeees * (60.0/70.0)));
        totalQPl = checkcredit( qptw *4);
        totalieeel = checkcredit( ieeetw*4);
        totalmfr = checkcredit( mfratt + mfrcie + (mfris * (20.0/30.0)) + (mfres * (60.0/70.0)));
        totalfab = checkcredit( fabtw *4);
        totalmfrl = checkcredit( mfrtw*4);
        totaliks  = checkcredit( (iksatt + ikscie )*4);
        totalikstw = checkcredit (ikstw*4);
    }

    void totalcredit(){
        TotalEarned = totalsic*creditSIC + totalsictut*creditSICT + totaloopc*creditOOPC + totaloopcl*creditOOPCL + totalQP*creditQP + totalQPl*creditQPL +totalieee*creditieee + totalieeel*creditieeeL +totalmfr*creditmfr + totalfab*creditfab +totalmfrl*creditmfrl + totaliks*creditiks + totalikstw*creditiksTW +totalcca*creditCCA;
    }
};



int main(){
    int n;
    cout<<"Select your group "<<endl;
    cout<<"1-group 1"<<endl<<"2-group 2"<<endl;
    cin>>n;

    if(n == 1){
        Group1 g1;
        g1.getinfo();
        g1.calculate();
        g1.totalcredit();
        g1.Sgpa();
    }else if(n == 2){
        Group2 g2;
        g2.getinfo();
        g2.calculate();
        g2.totalcredit();
        g2.Sgpa();
    }
    return 0;
}
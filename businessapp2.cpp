#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printMenu();
void header();
void patient();
void doctor();
void appointment();
float billing();
void Hpatient();
void Hdoctor(); 
void billCal();
VOID Hadmin();
void Happointment();
void doctorInt();
void patientOp();
void doctorOp();
void adminOp();
void patientInt();
void stock();
main()
{
system("Color 01");
system("cls");
header();
printMenu();
int choice=0;
while(choice!=5)
{
    cout<<"Enter choice:";
    cin>> choice;
    if(choice==1)
    {
        patientInt();
        patientOp();
    }
    else if(choice==2)
    {
        doctorInt();
        doctorOp();
    }
    else if (choice==3)
    {
        Hadmin();
        adminOp();
    }
    else
    {
        cout<<"Invalid choice.";
    }
    return 0;
}
}
void header()
{
cout<<"                    #    #  ####     ####   #####  ###  #####    ##      #"<<endl;
cout<<"                    #    #  #  #    ##      #   #   #     #     #  #     #"<<endl;
cout<<"                    ######  #  #      ##    #####   #     #    ######    #"<<endl;
cout<<"                    #    #  #  #       ##   #       #     #    #    #    #"<<endl;
cout<<"                    #    #  ####    ####    #      ###    #    #    #    #####"<<endl;
cout<<"                                                                                       "<<endl;
cout<<"##    ##     ##     ##    ##     ##      #####    #####   ##    ##   ####    ##    #   #######"<<endl;
cout<<"# #  # #    #   #   # #   ##    #  #     #        #       # #  # #   #       # #   #      #"<<endl;
cout<<"#  ##  #   #######  #  #  ##   ######    #  ##    #####   #  ##  #   ####    #  #  #      #"<<endl;
cout<<"#      #   #     #  #   # ##   #    #    #   ##   #       #      #   #       #   # #      #"<<endl;
cout<<"#      #   #     #  #     ##   #    #    #####    #####   #      #   ####    #     #      #"<<endl;
cout<<"                                                                                               "<<endl;
cout<<"                    ######  ##   ##   ######   #####   #####   ##    ##"<<endl;
cout<<"                   ###       ## ##   ###         #     #       # #  # #"<<endl;
cout<<"                     ###      ###      ###       #     #####   #  ##  # "<<endl;
cout<<"                       ###     #         ###     #     #       #      #"<<endl;
cout<<"                    #####      #      #####      #     #####   #      #"<<endl;
}
void printMenu()
{
gotoxy(28,19);
cout<<"======================================"<<endl;
gotoxy(28,20);
cout<<"|| Are you a patient,doctor or admin?||"<<endl;
gotoxy(28,21);
cout<<"||  Choose option.                   ||"<<endl;
gotoxy(28,22);
cout<<"||  1.Patient.                       ||"<<endl;
gotoxy(28,23);
cout<<"||  2.Doctor.                        ||"<<endl;
gotoxy(28,24);
cout<<"||  3.Admin                          ||"<<endl;
gotoxy(28,25);
cout<<"======================================"<<endl;
}
void Hpatient()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----P A T I E N T S   I N F O R M A T I O N-----"<<endl;
}
void patient()
{
int ID;
cout<<"Enter patient's ID";
cin>>ID;
if(ID==123456)
{
    cout<<"======================================="<<endl;
    cout<<"||  Patient name:Shahzeb.            ||"<<endl;
    cout<<"||  Age:35.                          ||"<<endl;
    cout<<"||  Address:146-A,canal view,lahore. ||"<<endl;
    cout<<"||  Illness:Fever,Mild headache.     ||"<<endl;
    cout<<"======================================="<<endl;

}
else if(ID==789012)
{
    cout<<"============================================"<<endl;
    cout<<"|| Patient name:Shazia.                   ||"<<endl;
    cout<<"|| Age:30.                                ||"<<endl;
    cout<<"|| Address:181-C,lake view city,Islamabad.||"<<endl;
    cout<<"|| Illness:Fever,Mild headache.           ||"<<endl;
    cout<<"============================================"<<endl;
} 
else
{
    cout<<"Invalid patient ID.";
}
}
void doctor()
{
    string name;
    cout<<"Enter doctor's name:";
    cin>>name;
    if(name=="Nofal" || name=="nofal")
    {
        cout<<"===================================="<<endl;
        cout<<"||  Doctor's ID:4567.             ||"<<endl;
        cout<<"||  Specialization:Cardiologist.  ||"<<endl;
        cout<<"||  Age:40.                       ||"<<endl;
        cout<<"||  Gender=Male.                  ||"<<endl;
        cout<<"===================================="<<endl;

    }
    else if(name=="Nazish" || name=="nazish")
    {
        cout<<"===================================="<<endl;
        cout<<"||  Doctor's ID:8901.             ||"<<endl;
        cout<<"||  Specialization:MBBS.          ||"<<endl;
        cout<<"||  Age:38.                       ||"<<endl;
        cout<<"||  Gender=Female.                ||"<<endl;
        cout<<"===================================="<<endl;

    }
}
void doctorInt()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----D O C T O R ' S    I N T E R F A C E-----"<<endl;
}
void appointment()
{
    string t,name;
    cout<<"Enter doctor's name:";
    cin>> name;
    cout<<"Enter requested appointment hour(eg. 04:00am):";
    cin>>t;
    if(name=="Nofal" || name=="nofal")
    {
        if(t=="10:00am" || t=="11:00am" || t=="12:00pm" || t=="03:00pm" || t=="04:00pm" || t=="05:00pm" || t=="06:00pm")
            {
                cout<<"Doctor is free during this hour.";
            }
        else
            {
                cout<<"Doctor isn't free during this hour.";
            }
    }
    else if(name=="Nazish" || name=="nazish")
    {
        if(t=="08:00am" || t=="09:00am" || t=="10:00pm" || t=="11:00am" || t=="12:00pm" || t=="02:00pm" || t=="03:00pm" || t=="04:00pm" || t=="05:00pm" || t=="06:00pm" || t=="08:00pm" || t=="09:00pm" || t=="10:00pm")
            {
                cout<<"Doctor is free during this hour.";
            }
        else
            {
                cout<<"Doctor isn't free during this hour.";
            }
    }
    else
    {
        cout<<"Invalid name.";
    }
}
float billing()
{
    int choice,t;
    float total;
    cout<<"Enter the number of appointment hours:";
    cin>>t;
    cout<<"Enter the kind of treatment from the following list."<<endl;
    cout<<"================================="<<endl;
    cout<<"||  1.Blood test               ||"<<endl;
    cout<<"||  2.ECG                      ||"<<endl;
    cout<<"||  3.Routine checkup          ||"<<endl;
    cout<<"||  4.Diabetes                 ||"<<endl;
    cout<<"||  5.Kidney desease           ||"<<endl;
    cout<<"================================="<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    if(choice==1)
    {
        total=t*50;
        cout<<"The charges for blood tests are:$"<<total;
    }
    else if(choice==2)
    {
        total=t*50;
        cout<<"The charges for ECG are:$"<<total;
    }
    else if(choice==3)
    {
        total=t*30;
        cout<<"The charges for routine checkup are:$"<<total;
    }
    else if(choice==4)
    {
        total=t*60;
        cout<<"The charges for the treatment of diabetes are:$"<<total;
    }
    else if(choice==5)
    {
        total=t*80;
        cout<<"The charges for the treatment of kidney disease are:"<<total;
    }
    else
    {
        cout<<"Ilvalid input";  
    }
    return total;
}
void patientOp()
{
int ch;
gotoxy(35,4);
cout<<"======================================="<<endl;
gotoxy(35,5);
cout<<"||  1.Search doctor's information.   ||"<<endl;
gotoxy(35,6);
cout<<"||  2.Appointment schedule.          ||"<<endl;
gotoxy(35,7);
cout<<"||  3.Calculate bill.                ||"<<endl;
gotoxy(35,8);
cout<<"||  4.Exit                           ||"<<endl;
gotoxy(35,9);
cout<<"======================================="<<endl;
cout<<"Enter choice:";
cin>>ch;
if (ch==1)
{
    Hdoctor();
    doctor();
}
else if (ch==2)
{
    Happointment();
    appointment();
}
else if(ch==3)
{
    billCal();
    billing();
}
else if(ch==4)
{
    main();
}
}
void patientInt()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----P A T I E N T ' S     I N T E R F A C E-----"<<endl;
}
void Hdoctor()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----D O C T O R ' S    I N F O R M A T I O N-----"<<endl;
}
void Happointment()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----A P P O I N T M E N T    S C H E D U L I N G-----"<<endl;
}
void billCal()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----B I L L    C A L C U L A T I O N-----"<<endl;
}
void Hadmin()
{
    system("cls");
    gotoxy(30,2);
    cout<<"-----A D M I N    I N T E R F A C E-----"<<endl;
}
void doctorOp()
{
    int ch;
gotoxy(35,4);
cout<<"======================================="<<endl;
gotoxy(35,5);
cout<<"||  1.Search patient's information   ||"<<endl;
gotoxy(35,6);
cout<<"||  2.Change appointment schedule.   ||"<<endl;
gotoxy(35,7);
cout<<"||  3.Exit.                          ||"<<endl;
gotoxy(35,8);
cout<<"======================================="<<endl;
cout<<"Enter choice:";
cin>>ch;
if(ch==1)
{
    Hpatient();
    patient();
}
else if(ch==2)
{

}
else if(ch==3)
{ 
    main();
}
}
void adminOp()
{
int ch;
gotoxy(35,4);
cout<<"=============================="<<endl;
gotoxy(35,5);
cout<<"||  1.Add patient.          ||"<<endl;
gotoxy(35,6);
cout<<"||  2.Add doctor.           ||"<<endl;
gotoxy(35,7);
cout<<"||  3.Check stock.          ||"<<endl;
gotoxy(35,8);
cout<<"||  4.Update stock.         ||"<<endl;
gotoxy(35,9);
cout<<"||  5.Exit.                 ||"<<endl;
gotoxy(35,10);
cout<<"=============================="<<endl;
cout<<"Enter choice:";
cin>>ch;
if(ch==1)
{

}
else if(ch==2)
{

}
else if(ch==3)
{
    stock();
}
else if(ch==4)
{

}
else if(ch==5)
{
    main();
}
}
void stock()
{
cout<<"== Medical Supplies =="<<endl;
cout<<"1. Surgical Masks - 5,000 units"<<endl;
cout<<"2. Gloves (Sterile and Non-Sterile) - 10,000 pairs"<<endl;
cout<<"3. Syringes and Needles - 8,000 units"<<endl;
cout<<"4. IV Bags and Tubes - 3,000 units"<<endl;
cout<<"5. Bandages and Dressings - 2,000 units"<<endl;
cout<<"6. Antiseptic Solutions - 500 bottles (500 ml each)"<<endl;
cout<<"7. Catheters - 1,200 units"<<endl;
cout<<"8. Gauze Pads - 7,000 units"<<endl;
cout<<"9. Thermometers - 200 units"<<endl;
cout<<"10. Surgical Sutures - 1,000 packs"<<endl;
cout<<"11. Blood Collection Tubes - 5,000 units"<<endl;
cout<<"12. Blood Pressure Cuffs - 100 units"<<endl;
cout<<"13. Stethoscopes - 150 units"<<endl;
cout<<"14. Oxygen Masks and Tubing - 1,000 units"<<endl;
cout<<"15. Surgical Drapes - 2,500 units"<<endl;
cout<<"16. Sterilization Wraps - 3,000 sheets"<<endl;
cout<<"                                 "<<endl;
cout<<"== Medications =="<<endl;
cout<<"1. Antibiotics - 10,000 tablets"<<endl;
cout<<"2. Pain Relievers (Paracetamol, Ibuprofen) - 15,000 tablets"<<endl;
cout<<"3. Anesthetics - 500 vials"<<endl;
cout<<"4. Intravenous Fluids - 2,000 bags"<<endl;
cout<<"5. Anticoagulants - 1,200 tablets"<<endl;
cout<<"6. Antiseptic Creams - 500 tubes"<<endl;
cout<<"7. Insulin - 400 vials"<<endl;
cout<<"8. Vitamins and Supplements - 5,000 bottles"<<endl;
cout<<"9. Vaccines - 1,000 doses"<<endl;
cout<<"10. Sedatives - 800 vials"<<endl;
cout<<"                                 "<<endl;
cout<<"== Medical Equipment"<<endl;
cout<<"1. Surgical Instruments (Scalpels, Scissors, Forceps) - 300 sets"<<endl;
cout<<"2. ECG Machines - 15 units"<<endl;
cout<<"3. X-Ray Machines - 10 units"<<endl;
cout<<"4. Ultrasound Devices - 8 units"<<endl;
cout<<"5. Ventilators - 25 units"<<endl;
cout<<"6. Defibrillators - 20 units"<<endl;
cout<<"7. Patient Monitoring Systems - 50 units"<<endl;
cout<<"8. Wheelchairs - 100 units"<<endl;
cout<<"9. Hospital Beds - 200 units"<<endl;
cout<<"10. Crutches and Walkers - 150 units"<<endl;
cout<<"                                 "<<endl;
cout<<"== Laboratory Supplies =="<<endl;
cout<<"1. Test Tubes and Vials - 10,000 units"<<endl;
cout<<"2. Centrifuges - 10 units"<<endl;
cout<<"3. Microscopes - 25 units"<<endl;
cout<<"4. Diagnostic Kits (Blood Glucose, Pregnancy Tests) - 5,000 kits"<<endl;
cout<<"5. Slides and Cover Slips - 20,000 units"<<endl;
cout<<"6. Petri Dishes - 3,000 units"<<endl;
cout<<"7. Culture Media - 1,500 units"<<endl;
cout<<"8. Reagents and Chemicals - 1,000 bottles"<<endl;
cout<<"                                 "<<endl;
cout<<"== Administrative Supplies =="<<endl;
cout<<"1. Patient Files and Folders - 10,000 units"<<endl;
cout<<"2. Paper for Printers - 1,000 reams"<<endl;
cout<<"3. ID Bands for Patients - 5,000 units"<<endl;
cout<<"4. Barcode Scanners - 30 units"<<endl;
cout<<"5. Labeling Machines - 20 units"<<endl;
cout<<"6. Pens, Clipboards, and Notepads - 3,000 units each"<<endl;
cout<<"7. Computers and Monitors - 100 units"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
{
TCanvas *c1 = new TCanvas("c1","Title",800,600);
//creates a canvas names "c1" 800x600 pixels
c1->Divide(1,2);
//divides 1 column and 2 row

TF1 *f1 =new TF1("f1","x*sin(x)",0,10);
TF1 *f2 =new TF1("f2","x*cos(x)",0,10);

c1->cd(1);
f1-> Draw();

c1->cd(2);
f2->Draw();

}


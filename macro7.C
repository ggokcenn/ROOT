{
gStyle->SetOptStat();
//sets the display opt for statis,default hides them
gStyle->SetOptFit (1111);
//display opt for fitting results
//1st:chi-square and degrees of freedom
//2nd:constant param in the fit
//3rd:mean value param in the fit
//4th:sigma value param in the fit

TH1F *h1 = new TH1F("h1", "Poisson", 50,0,50);
TH1F *h2 = new TH1F("h2", "Poisson", 50,0,50);
TH1F *h3 = new TH1F("h3", "Poisson", 50,0,50);

//Random Number Generator
TRandom3 RndGen;
//TRandom3 is a random num generator class based on Mersenne Twister alg.
Int_t N=1000000;
//Int_t is a typedef

for(int i=0; i<N; i++){
h1->Fill(RndGen.Poisson (5));//generate number following poisson
h2->Fill(RndGen.Poisson (20));
h3->Fill(RndGen.Poisson (30));

}

h3->SetTitle("Poisson and Gauss distribution");
h3->SetMinimum(0);
h3->SetMaximum (200000);

h3->Draw();
h3->Fit("gaus");
h2->Draw("same");
h1->Draw("same");
}

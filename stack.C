{

    THStack *hs = new THStack("hs","");
//creates a stack of histograms

    TH1F *h1 = new TH1F("h1", "test hstack", 10,-4,4);//10 bins
    h1->FillRandom("gaus", 20000);
    h1->SetFillColor(kRed);
    hs->Add(h1);//add it to stack

    TH1F *h2 = new TH1F("h2", "test hstack", 10,-4,4);
    h2->FillRandom("gaus", 15000);
    h2->SetFillColor(kBlue);
    hs->Add(h2);

    TH1F *h3 = new TH1F("h3", "test hstack", 10,-4,4);
    h3->FillRandom("gaus", 10000);
    h3->SetFillColor(kGreen);
    hs->Add(h3);

    TCanvas *cs = new TCanvas("cs", "cs", 10,10,700,900);
//700w,900h placed at (10,10)
    TText T; T.SetTextFont(42); T.SetTextAlign (21);
//Create TText object,42 Helvatica,text aligned to center
    cs->Divide(1,2);
//divide canvas into 1row 2columns
    cs->cd(1); hs->Draw(); T.DrawTextNDC(.5,.95, "Default drawing option");
//draw on 1st:default drawing and normalized device coord.(0.5,0.95)
    cs->cd(2); hs->Draw("nostack"); T.DrawTextNDC(.5,.95,"Option \"nostack\"");
//2nd:normalized same,without stacking
//    cs->cd(3); hs->Draw("nostackb"); T.DrawTextNDC(.5,.95,"Option \"nostackb\"");

//    cs->cd(4); hs->Draw("lego1"); T.DrawTextNDC(.5,.95,"Option \"lego1\"");


    return cs;

    }

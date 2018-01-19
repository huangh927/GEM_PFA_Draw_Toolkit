noise_01L1()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("01L1.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 01L1;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,200);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_01L1_group.pdf");
    
}

noise_27L1()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("27L1.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 27L1;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,120);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_27L1_group.pdf");
    
}

noise_27L2()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("27L2.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 27L2;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,220);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_27L2_group.pdf");
    
}

noise_28L1()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("28L1.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 28L1;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,110);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_28L1_group.pdf");
    
}

noise_28L2()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("28L2.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 28L2;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,160);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_28L2_group.pdf");
    
}

noise_29L1()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("29L1.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 29L1;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,200);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_29L1_group.pdf");
    
}

noise_30L1()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("30L1.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 30L1;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,200);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_30L1_group.pdf");
    
}

noise_30L2()
{
    TH1F *g1 = new TH1F("g1","g1",60,0.,15.);
    TH1F *g2 = new TH1F("g2","g2",60,0.,15.);
    TH1F *g3 = new TH1F("g3","g3",60,0.,15.);
    TH1F *g4 = new TH1F("g4","g4",60,0.,15.);
    TChain *Chain01 = new TChain("scurveFitTree");
    Chain01->Add("30L2.root");
    Int_t maskReason;
    Float_t noise;
    Int_t vfatN;
    Chain01->SetBranchAddress("noise",&noise);
    Chain01->SetBranchAddress("maskReason",&maskReason);
    Chain01->SetBranchAddress("vfatN",&vfatN);
    
    long int nentries01=Chain01->GetEntries();
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==6 || vfatN==7 || vfatN==14 || vfatN==15 || vfatN==22 || vfatN==23))
            g1->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==4 || vfatN==5 || vfatN==12 || vfatN==13 || vfatN==20 || vfatN==21))
            g2->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==2 || vfatN==3 || vfatN==10 || vfatN==11 || vfatN==18 || vfatN==19))
            g3->Fill(noise);
    }
    
    for(long int i=0;i<nentries01;i++)
    {
        Chain01->GetEntry(i);
        if(maskReason==0 && (vfatN==0 || vfatN==1 || vfatN==8 || vfatN==9 || vfatN==16 || vfatN==17))
            g4->Fill(noise);
    }
    
    TCanvas* c2=new TCanvas("c2","c2",800,800);
    gStyle->SetOptStat(0);
    g1->SetLineColor(4);
    g1->SetTitle("N vs noise 30L2;noise;N");
    g1->SetLineWidth(2);
    g1->GetYaxis()->SetRangeUser(0,160);
    g1->Draw("");
    g2->SetLineColor(6);
    g2->SetLineWidth(2);
    g2->Draw("same");
    g3->SetLineColor(2);
    g3->SetLineWidth(2);
    g3->Draw("same");
    g4->SetLineColor(8);
    g4->SetLineWidth(2);
    g4->Draw("same");
    
    leg = new TLegend(0.6,0.65,0.88,0.88,"","NDC");
    leg->SetBorderSize(0);
    leg->AddEntry(g1,"group1","l");
    leg->AddEntry(g2,"group2","l");
    leg->AddEntry(g3,"group3","l");
    leg->AddEntry(g4,"group4","l");
    
    leg->Draw();
    
    c2->Print("highnoise_30L2_group.pdf");
    
}

void noise_full_4eta_1D(){
    
    noise_01L1();
    noise_27L1();
    noise_27L2();
    noise_28L1();
    noise_28L2();
    noise_29L1();
    noise_30L1();
    noise_30L2();
}



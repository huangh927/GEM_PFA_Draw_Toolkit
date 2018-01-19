Ratio_01L1()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("01L1;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_01L1.pdf");

}

Ratio_27L1()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("27L1;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_27L1.pdf");

}

Ratio_27L2()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("27L2;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_27L2.pdf");

}

Ratio_28L1()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("28L1;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_28L1.pdf");

}

Ratio_28L2()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("28L2;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_28L2.pdf");

}

Ratio_29L1()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("29L1;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_29L1.pdf");

}

Ratio_30L1()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("30L1;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_30L1.pdf");

}

Ratio_30L2()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("30L2;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_30L2.pdf");

}

Ratio_allchambers()
{
  TH1F *good = new TH1F("good","good",100,0.,0.1);
  TH1F *fitfailed = new TH1F("fitfailed","fitfailed",100,0.,0.1);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("allchambers.root");

  Float_t chi2;
  Int_t ndf;
  Float_t ratio;
  Int_t maskReason;

  Chain01->SetBranchAddress("chi2",&chi2);
  Chain01->SetBranchAddress("ndf",&ndf);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }
      if(maskReason==0)
          good->Fill(ratio);
   }


  for(long int j=0;j<nentries01;j++)
  {
     Chain01->GetEntry(j);
      if(ndf>0){
          ratio=chi2/ndf;
      }
      else{
          ratio=0;
      }

     if(maskReason==2 || maskReason==3 || maskReason==6 || maskReason==10 || maskReason==18 || maskReason==7 || maskReason==11 || maskReason==19 || maskReason==14 || maskReason==22 || maskReason==26 || maskReason==30 || maskReason==27 || maskReason==23 || maskReason==15 || maskReason==31)
         fitfailed->Fill(ratio);
   }

  TCanvas* c2=new TCanvas();

  gStyle->SetOptStat(0);
  good->SetLineColor(4);
  good->SetTitle("allchambers;Chi^{2}/NDF;");

  good->SetLineWidth(2);
  good->Draw("");
  fitfailed->SetLineColor(6);
  fitfailed->SetLineWidth(2);
  fitfailed->Draw("same");


  leg = new TLegend(0.6,0.75,0.88,0.88,"","NDC");
  leg->SetBorderSize(0);
  leg->AddEntry(good,"good channels","l");
  leg->AddEntry(fitfailed,"FitFailed channels","l");

  leg->Draw();

  c2->Print("Z_allchambers.pdf");

}


void Ratio_full(){

    Ratio_allchambers();
    Ratio_01L1();
    Ratio_27L1();
    Ratio_27L2();
    Ratio_28L1();
    Ratio_28L2();
    Ratio_29L1();
    Ratio_30L1();
    Ratio_30L2();
}


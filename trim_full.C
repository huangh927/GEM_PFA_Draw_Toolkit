trim_01L1_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 01L1 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_01L1_hot.pdf");

}

trim_27L1_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 27L1 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_27L1_hot.pdf");

}

trim_27L2_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 27L2 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_27L2_hot.pdf");

}

trim_28L1_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 28L1 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_28L1_hot.pdf");

}

trim_28L2_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 28L2 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_28L2_hot.pdf");

}

trim_29L1_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 29L1 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_29L1_hot.pdf");

}

trim_30L1_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 30L1 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_30L1_hot.pdf");

}

trim_30L2_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange 30L2 HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_30L2_hot.pdf");

}

trim_allchambers_hot()
{
  TH2F *trim = new TH2F("trim","trim",5,0,5,32,0,32);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("allchambers.root");

  Int_t trimDAC;
  Int_t trimRange;
  Int_t maskReason;

  Chain01->SetBranchAddress("trimDAC",&trimDAC);
  Chain01->SetBranchAddress("trimRange",&trimRange);
  Chain01->SetBranchAddress("maskReason",&maskReason);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==1 || maskReason==3 || maskReason==5 || maskReason==7 || maskReason==9 || maskReason==11 || maskReason==13 || maskReason==15 || maskReason==17 || maskReason==19 || maskReason==21 || maskReason==23 || maskReason==25 || maskReason==27 || maskReason==29 || maskReason==31)
         trim->Fill(trimRange,trimDAC);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  trim->SetTitle("trimDAC vs trimRange all chambers HotChannels;trimRange;trimDAC");
  trim->Draw("colztext");


  c2->Print("Trim_allchambers_hot.pdf");

}

void trim_full(){

    trim_allchambers_hot();
    trim_01L1_hot();
    trim_27L1_hot();
    trim_27L2_hot();
    trim_28L1_hot();
    trim_28L2_hot();
    trim_29L1_hot();
    trim_30L1_hot();
    trim_30L2_hot();
}

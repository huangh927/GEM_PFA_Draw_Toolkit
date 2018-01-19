noise_01L1_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("01L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 01L1;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_01L1_good.pdf");

}

noise_27L1_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 27L1;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_27L1_good.pdf");

}

noise_27L2_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("27L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 27L2;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_27L2_good.pdf");

}

noise_28L1_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 28L1;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_28L1_good.pdf");

}

noise_28L2_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("28L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 28L2;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_28L2_good.pdf");

}

noise_30L1_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 30L1;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_30L1_good.pdf");

}

noise_30L2_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("30L2.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 30L2;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_30L2_good.pdf");

}

noise_29L1_good_position()
{
  TH2F *Noise = new TH2F("Noise","Noise",24,0,24,24,0.,6.);

  TChain *Chain01 = new TChain("scurveFitTree");
  Chain01->Add("29L1.root");

  Int_t maskReason;
  Int_t vfatN;
  Float_t noise;

  Chain01->SetBranchAddress("maskReason",&maskReason);
  Chain01->SetBranchAddress("vfatN",&vfatN);
  Chain01->SetBranchAddress("noise",&noise);

  long int nentries01=Chain01->GetEntries();

  for(long int i=0;i<nentries01;i++)
  {
     Chain01->GetEntry(i);
     if(maskReason==0)
         Noise->Fill(vfatN,noise);
   }

  TCanvas* c2=new TCanvas("c2","c2",800,800);
  gStyle->SetOptStat(0);
  Noise->SetTitle("noise vs vfatN 29L1;vfatN;noise");
  Noise->Draw("colztext");

  c2->Print("Noise_position_29L1_good.pdf");

}


void noise_full_good_position(){

    noise_01L1_good_position();
    noise_27L1_good_position();
    noise_27L2_good_position();
    noise_28L1_good_position();
    noise_28L2_good_position();
    noise_29L1_good_position();
    noise_30L1_good_position();
    noise_30L2_good_position();
}


# 🚀 CyberHack  
### **Team Name:** One-Direction  

## 🏆 Problem Statement  
Social engineering frauds are on the rise, where scammers create fake profiles of well-known individuals on social media. These fraudsters deceive their victims, often extracting personal data or even money. Our proposed solution is a **Spam Profile Detection Mobile App** that **automatically detects and flags fraudulent accounts** on platforms like Instagram and LinkedIn.  

---

# **🔍 Truecaller for Social Media**  
## **A Spam Profile Detection Mobile App**  

### 📌 Overview  
Our mobile app helps identify spam profiles using **machine learning models**, analyzing **engagement metrics** and **follower-following ratios**. Additionally, it leverages the **Reclaim Protocol** to ensure that users give **explicit consent** before sharing their data. Users who participate in data sharing are **incentivized** with rewards.  

📌 **Mindmap of the Application:**  
![Mindmap](file-8kALZnq9GxYDfwRguXiZa2)  

---

## **✨ Core Features**  

### 📊 **Profile Analysis**  
✅ Fetches **followers, following, and engagement metrics** from Instagram & LinkedIn.  
✅ Uses **APIs & Web Scraping** to collect relevant profile data.  
✅ Computes key indicators like **engagement rate** and **follower-following ratio**.  
✅ **ML Model-Based Classification** of spam vs. legitimate profiles.  

### 🔐 **User Consent & Incentivization**  
✅ Implements **Reclaim Protocol** for **explicit consent** before data collection.  
✅ Users are **rewarded** for sharing data.  

### 🤖 **Spam Detection Using Machine Learning**  
✅ The model is trained on real-world engagement metrics and network data.  
✅ Provides **real-time classification** of suspicious accounts.  

### 🛡️ **Privacy & Security**  
✅ Ensures **data encryption & compliance** with privacy regulations.  
✅ Users can **revoke consent** and **delete their shared data** anytime.  

### 🎨 **User Interface**  
✅ **Intuitive UI** for easy profile analysis.  
✅ **Dashboard View** displaying **spam indicators** and **security scores**.  

📌 **Customer Journey Flow Diagram:**  
![Customer Journey](file-Cwq1bVXV72CdgQ7g43X2kB)  

---

## **📌 How Spam Profiles Are Detected**  

Our approach is inspired by findings from the **Systematic Literature Review on Instagram Fake Account Detection Based on Machine Learning** ([ResearchGate Paper](https://www.researchgate.net/publication/358590043_Systematic_Literature_Review_Instagram_Fake_Account_Detection_Based_on_Machine_Learning)).  

Key spam indicators include:  
✅ **Low engagement despite high followers**  
✅ **Excessive use of hashtags in posts**  
✅ **Frequent but meaningless comments**  
✅ **Unrealistic follower-following ratio**  
✅ **Absence of a real profile picture**  

📌 **Engagement Ratio Formula:**  
```math
Engagement Rate (%) = [(Likes + Comments) ÷ Followers] × 100
```

The **ML Model** uses these parameters to classify profiles as **Spam** or **Legitimate**.  

---

## **🛠️ How User Data Is Collected**  
🔹 Users input the **profile link** of the account they want to verify.  
🔹 The app extracts **engagement metrics & network data** via **APIs & Web Scraping**.  
🔹 The **ML Model** evaluates the profile and classifies it.  
🔹 **Users are notified** whether the account is spam or not.  
🔹 **Reclaim Protocol** ensures that data collection is based on **user consent**.  

---

## **🎁 Incentivization Model**  

To encourage participation, we offer:  

### 💰 **Token-Based Rewards System**  
- Users earn **tokens** for contributing profile data and analyzing profiles.  
- Tokens can be redeemed for **premium features or digital rewards**.  

### 🎮 **Gamification & Referral Programs**  
- Leaderboards & reward milestones.  
- Users receive **bonus tokens** for referring others.  

---

## **💻 Technology Stack**  

### 🎨 **Frontend:**  
- **Capacitor.js**, **React.js**  

### 🔧 **Backend:**  
- **Node.js** with **Express.js/Fastify**  

### 🛢️ **Database:**  
- **Firebase**  

### 🤖 **Machine Learning Model:**  
- **TensorFlow.js / Scikit-learn** for profile classification  

### 🌐 **API Integrations:**  
- **Instagram Graph API**, **LinkedIn API**  

### 🔗 **Blockchain & Consent Management:**  
- **Reclaim Protocol** for user authentication and data sharing permissions  

---

### **🚀 Deployment & Future Enhancements**  
✔ **Beta release on Google Play Store & Apple App Store**.  
✔ Expanding detection features to include **Facebook & Twitter**.  
✔ Adding **real-time alerts** for users when they interact with a spam account.  

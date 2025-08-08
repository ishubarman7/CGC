class GoogleStudentAmbassadorApplication:
    def __init__(self):
        # 🔹 Basic Details
        self.name = "Ishu Barman"
        self.email = "ishubarman9067900@gmail.com"  # Replace with real email if needed
        self.college = "Chandigarh Group of Colleges, Jhanjeri"
        self.branch = "B.Tech in Computer Science and Engineering"
        self.batch = "2023-2027"

        # 🔹 Current Roles
        self.roles = [
            "Campus Ambassador at GeeksforGeeks",
            "Campus Ambassador at Unstop"
        ]

        # 🔹 Achievements
        self.achievements = [
            "Secured 4th rank out of 700+ students in Code Katana 2.0 (GFG)",
            "Currently holding 1st position in a campus-wide coding marathon (2150+ participants)",
            "Winner of GFG Campus Ambassador meme competition – ‘Humour Hunt: Meme Mania’",
            "Participated in GDG DevFest Chandigarh with fellow developers",
            "Internships & workshops in Ethical Hacking, IoT, and Python"
        ]

        # 🔹 Technical & Community Skills
        self.skills = {
            "Programming": ["C++", "Python", "JavaScript (Basics)", "DSA"],
            "Development": ["Web Dev (HTML, CSS, JS)", "IoT with Arduino, ESP32, Raspberry Pi"],
            "Core CS": ["DBMS", "OS", "Networking"],
            "Tools": ["Pygame", "Pandas", "Linux", "Git"],
            "Soft Skills": ["Leadership", "Communication", "Mentoring", "Event Management"]
        }

        # 🔹 Passion and Vision
        self.passion = "I’m passionate about bridging the gap between students and the tech world through opportunities, innovation, and collaboration."
        self.vision = "To inspire and empower students to learn, build, and grow — by fostering a culture of curiosity, coding, and creativity."

        # 🔹 Google-Aligned Values
        self.google_values = ["Open Source", "Innovation", "Tech for Everyone", "Diversity & Inclusion", "Community First"]

    def why_me(self):
        print(f"🚀 Hi, Myself {self.name} from {self.college}, {self.branch} ({self.batch})")
        print("🎯 Roles:", ", ".join(self.roles))
        print("🏆 Achievements:")
        for achievement in self.achievements:
            print(f"  - {achievement}")
        print("🛠️ Skills:")
        for category, skill_list in self.skills.items():
            print(f"  {category}: {', '.join(skill_list)}")
        print("\n💡 Passion:", self.passion)
        print("🌍 Vision:", self.vision)
        print("💚 I strongly align with Google's values:", ", ".join(self.google_values))


# Run the pitch
ishu_gsa = GoogleStudentAmbassadorApplication()
ishu_gsa.why_me()
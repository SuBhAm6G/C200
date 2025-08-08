<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C Programming Questions</title>
    <!-- Tailwind CSS for styling -->
    <script src="https://cdn.tailwindcss.com"></script>
    <!-- Google Fonts for modern typography -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700;900&display=swap" rel="stylesheet">
    <style>
        /* Applying the Inter font to the body */
        body {
            font-family: 'Inter', sans-serif;
        }
    </style>
</head>
<body class="bg-slate-900 text-slate-300 antialiased">

    <!-- Main container with padding -->
    <div class="container mx-auto px-4 py-12 md:py-20 max-w-5xl">

        <!-- Header Section -->
        <header class="text-center mb-16 md:mb-20">
            <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="C Logo" class="w-24 h-24 mx-auto mb-6 bg-slate-800 p-4 rounded-full shadow-lg shadow-cyan-500/20">
            <h1 class="text-4xl md:text-6xl font-extrabold text-white tracking-tight">
                C Programming<span class="text-cyan-400">.</span>
            </h1>
            <p class="mt-4 text-lg md:text-xl text-slate-400 max-w-2xl mx-auto">
                A curated collection of questions to sharpen your C programming skills. Master the fundamentals and tackle advanced concepts.
            </p>
        </header>

        <!-- Why C? Section with a card-based layout -->
        <section class="mb-16 md:mb-20">
            <h2 class="text-3xl font-bold text-center text-white mb-10">Why Master C?</h2>
            <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                <!-- Card 1: Powerful -->
                <div class="bg-slate-800/50 p-6 rounded-xl border border-slate-700 hover:border-cyan-400 hover:scale-105 transition-all duration-300">
                    <div class="flex items-center mb-4">
                        <svg xmlns="http://www.w3.org/2000/svg" class="h-8 w-8 text-cyan-400 mr-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2"><path stroke-linecap="round" stroke-linejoin="round" d="M13 10V3L4 14h7v7l9-11h-7z" /></svg>
                        <h3 class="text-xl font-bold text-white">Powerful</h3>
                    </div>
                    <p class="text-slate-400">C provides low-level access to memory, giving you unparalleled control and performance for system-level programming.</p>
                </div>
                <!-- Card 2: Portable -->
                <div class="bg-slate-800/50 p-6 rounded-xl border border-slate-700 hover:border-cyan-400 hover:scale-105 transition-all duration-300">
                    <div class="flex items-center mb-4">
                        <svg xmlns="http://www.w3.org/2000/svg" class="h-8 w-8 text-cyan-400 mr-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2"><path stroke-linecap="round" stroke-linejoin="round" d="M21 12a9 9 0 01-9 9m9-9a9 9 0 00-9-9m9 9H3m9 9a9 9 0 01-9-9m9 9V3m0 18a9 9 0 009-9m-9 9a9 9 0 00-9-9" /></svg>
                        <h3 class="text-xl font-bold text-white">Portable</h3>
                    </div>
                    <p class="text-slate-400">Code written in C is highly portable, allowing you to compile and run it on a wide variety of platforms with minimal changes.</p>
                </div>
                <!-- Card 3: Foundational -->
                <div class="bg-slate-800/50 p-6 rounded-xl border border-slate-700 hover:border-cyan-400 hover:scale-105 transition-all duration-300">
                     <div class="flex items-center mb-4">
                        <svg xmlns="http://www.w3.org/2000/svg" class="h-8 w-8 text-cyan-400 mr-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2"><path stroke-linecap="round" stroke-linejoin="round" d="M20.354 15.354A9 9 0 018.646 3.646 9.003 9.003 0 0012 21a9.003 9.003 0 008.354-5.646z" /></svg>
                        <h3 class="text-xl font-bold text-white">Foundational</h3>
                    </div>
                    <p class="text-slate-400">Its principles and syntax have influenced countless modern languages like C++, Java, and Python, making it a crucial language to learn.</p>
                </div>
            </div>
        </section>

        <!-- Get Started Section / Call to Action -->
        <section class="text-center mb-16 md:mb-20 bg-slate-800/50 border border-slate-700 rounded-xl p-8 md:p-12">
            <h2 class="text-3xl font-bold text-white mb-4">Ready to Dive In?</h2>
            <p class="text-slate-400 max-w-xl mx-auto mb-8">Start your journey by exploring resources and practicing with real-world coding challenges. The best way to learn is by doing.</p>
            <div class="flex flex-col sm:flex-row justify-center items-center gap-4">
                <a href="#" class="w-full sm:w-auto bg-cyan-500 hover:bg-cyan-600 text-white font-bold py-3 px-6 rounded-lg transition-all duration-300 transform hover:scale-105">Solve Challenges</a>
                <a href="#" class="w-full sm:w-auto bg-slate-700 hover:bg-slate-600 text-white font-bold py-3 px-6 rounded-lg transition-all duration-300 transform hover:scale-105">Explore Resources</a>
            </div>
        </section>

        <!-- Quote Section -->
        <section class="text-center my-16 md:my-20">
            <blockquote class="relative max-w-3xl mx-auto">
                <p class="text-2xl italic text-slate-300">"C is not just a programming language; it's a way of thinking."</p>
                <footer class="mt-4 text-lg text-slate-500">— Anonymous</footer>
            </blockquote>
        </section>

        <!-- Footer -->
        <footer class="text-center border-t border-slate-800 pt-8 mt-12">
            <p class="text-slate-500">Happy Coding!</p>
        </footer>

    </div>

</body>
</html>

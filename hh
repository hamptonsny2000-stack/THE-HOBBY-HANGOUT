<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <meta name="description" content="The Hobby Hangout is a private sports card marketplace on Discord. Buy. Sell. Trade. Connect. 7-day free trial." />
  <title>The Hobby Hangout | Where The Hobby Lives</title>

  <!-- Open Graph -->
  <meta property="og:title" content="The Hobby Hangout | Where The Hobby Lives" />
  <meta property="og:description" content="Private sports card marketplace on Discord. Buy. Sell. Trade. Connect. 7-day free trial." />
  <meta property="og:type" content="website" />
  <meta property="og:image" content="og-image.png" />

  <style>
    :root{
      --bg:#07070b;
      --panel:#0e0f16;
      --text:#e8e8ee;
      --muted:#b2b3bd;
      --line:#202233;
      --metal:#c9c9d2;     /* silver/gray */
      --accent:#ffd400;    /* yellow */
      --accent2:#ffea66;
      --shadow: 0 18px 50px rgba(0,0,0,.45);
      --radius: 18px;
      --max: 1120px;
    }

    *{box-sizing:border-box}
    html,body{height:100%}
    body{
      margin:0;
      font-family: ui-sans-serif, system-ui, -apple-system, Segoe UI, Roboto, Helvetica, Arial, "Apple Color Emoji","Segoe UI Emoji";
      background:
        radial-gradient(1200px 700px at 70% 0%, rgba(255,212,0,.14), transparent 55%),
        radial-gradient(900px 600px at 10% 10%, rgba(201,201,210,.10), transparent 60%),
        linear-gradient(180deg, var(--bg), #05050a 70%);
      color:var(--text);
      line-height:1.4;
    }

    a{color:inherit;text-decoration:none}
    .wrap{max-width:var(--max); margin:0 auto; padding:28px 20px 80px;}
    .topbar{
      display:flex; align-items:center; justify-content:space-between;
      gap:16px;
      position:sticky; top:0; z-index:50;
      padding:14px 0;
      background: linear-gradient(180deg, rgba(7,7,11,.92), rgba(7,7,11,.6), transparent);
      backdrop-filter: blur(8px);
    }
    .brand{
      display:flex; align-items:center; gap:12px;
      letter-spacing:.2px;
    }
    .logo{
      width:38px; height:38px; border-radius:12px;
      background:
        linear-gradient(135deg, rgba(255,212,0,.9), rgba(255,212,0,.15)),
        linear-gradient(135deg, rgba(201,201,210,.35), rgba(201,201,210,.05));
      box-shadow: 0 10px 30px rgba(255,212,0,.12);
      border:1px solid rgba(255,212,0,.25);
      display:grid; place-items:center;
      font-weight:800; color:#000;
    }
    .brand h1{font-size:14px; margin:0; color:var(--metal); font-weight:800;}
    .brand span{display:block; font-size:12px; color:var(--muted); font-weight:600; margin-top:2px;}

    .nav{display:flex; gap:14px; align-items:center; flex-wrap:wrap; justify-content:flex-end;}
    .nav a{
      font-size:13px; color:var(--muted);
      padding:10px 12px; border-radius:999px;
      border:1px solid rgba(255,255,255,.08);
      background: rgba(14,15,22,.45);
    }
    .nav a:hover{border-color:rgba(255,212,0,.35); color:var(--text);}
    .btn{
      display:inline-flex; align-items:center; justify-content:center;
      padding:12px 16px; border-radius:999px;
      font-weight:800; font-size:14px;
      border:1px solid rgba(255,212,0,.55);
      background: linear-gradient(180deg, var(--accent), var(--accent2));
      color:#000;
      box-shadow: 0 12px 30px rgba(255,212,0,.16);
      gap:10px;
      cursor:pointer;
    }
    .btn:hover{filter:brightness(1.02)}
    .btn.secondary{
      background: rgba(14,15,22,.55);
      border:1px solid rgba(255,255,255,.14);
      color:var(--text);
      box-shadow:none;
      font-weight:700;
    }
    .btn.secondary:hover{border-color:rgba(255,212,0,.35)}
    .hero{
      display:grid;
      grid-template-columns: 1.05fr .95fr;
      gap:26px;
      padding:32px 0 10px;
      align-items:start;
    }
    @media (max-width: 980px){
      .hero{grid-template-columns:1fr; padding-top:22px;}
    }

    .kicker{
      display:inline-flex; gap:10px; align-items:center;
      padding:8px 12px; border-radius:999px;
      border:1px solid rgba(255,212,0,.25);
      background: rgba(255,212,0,.06);
      color:var(--metal);
      font-weight:800;
      font-size:12px;
      letter-spacing:.4px;
      text-transform:uppercase;
    }
    .kicker i{
      width:8px; height:8px; border-radius:99px; background: var(--accent);
      box-shadow: 0 0 0 6px rgba(255,212,0,.12);
      display:inline-block;
    }
    .headline{
      font-size:54px; margin:14px 0 12px;
      letter-spacing:-1.2px;
      line-height:1.02;
      color:var(--metal);
      text-shadow: 0 10px 50px rgba(0,0,0,.35);
    }
    @media (max-width: 520px){
      .headline{font-size:40px;}
    }
    .headline em{color:var(--accent); font-style:normal;}
    .subhead{
      font-size:16px; color:var(--muted); margin:0 0 18px;
      max-width: 56ch;
    }
    .ctaRow{display:flex; gap:12px; flex-wrap:wrap; align-items:center; margin-top:18px;}
    .micro{
      font-size:12px; color:rgba(178,179,189,.9);
      margin-top:10px;
    }
    .micro b{color:var(--text)}

    .card{
      background: rgba(14,15,22,.7);
      border: 1px solid rgba(255,255,255,.08);
      border-radius: var(--radius);
      box-shadow: var(--shadow);
    }
    .panel{
      padding:18px;
      position:relative;
      overflow:hidden;
    }
    .panel:before{
      content:"";
      position:absolute; inset:-2px;
      background:
        radial-gradient(600px 250px at 20% 0%, rgba(255,212,0,.12), transparent 55%),
        radial-gradient(700px 300px at 95% 10%, rgba(201,201,210,.10), transparent 60%);
      pointer-events:none;
      opacity:.95;
    }
    .panel > *{position:relative; z-index:1;}

    .stats{
      display:grid; grid-template-columns: repeat(3,1fr);
      gap:10px;
      margin-top:14px;
    }
    @media (max-width:520px){.stats{grid-template-columns:1fr;}}
    .stat{
      padding:14px;
      border-radius:14px;
      border:1px solid rgba(255,255,255,.08);
      background: rgba(7,7,11,.55);
    }
    .stat .n{font-weight:900; color:var(--accent); font-size:18px;}
    .stat .l{color:var(--muted); font-size:12px; margin-top:2px;}

    .section{margin-top:42px;}
    .section h2{
      margin:0 0 12px;
      font-size:22px;
      color:var(--metal);
      letter-spacing:-.2px;
    }
    .grid3{
      display:grid;
      grid-template-columns: repeat(3, 1fr);
      gap:14px;
    }
    @media (max-width:980px){.grid3{grid-template-columns:1fr;}}
    .tile{padding:18px;}
    .tile h3{margin:0 0 8px; font-size:16px; color:var(--text);}
    .tile p{margin:0; color:var(--muted); font-size:13px;}
    .tag{
      display:inline-flex; align-items:center; gap:8px;
      font-size:12px;
      padding:8px 10px;
      border-radius:999px;
      border:1px solid rgba(255,212,0,.25);
      background: rgba(255,212,0,.06);
      color:var(--metal);
      font-weight:800;
      margin-bottom:10px;
    }
    .tag svg{width:14px; height:14px; fill:var(--accent);}

    .split{
      display:grid;
      grid-template-columns: 1.1fr .9fr;
      gap:16px;
      align-items:start;
    }
    @media (max-width:980px){.split{grid-template-columns:1fr;}}
    .list{
      margin:0;
      padding-left:18px;
      color:var(--muted);
      font-size:13px;
    }
    .list li{margin:8px 0}
    .faq details{
      border:1px solid rgba(255,255,255,.08);
      background: rgba(7,7,11,.35);
      border-radius: 14px;
      padding:14px 14px;
      margin:10px 0;
    }
    .faq summary{
      cursor:pointer;
      font-weight:850;
      color:var(--text);
      list-style:none;
    }
    .faq summary::-webkit-details-marker{display:none;}
    .faq p{margin:10px 0 0; color:var(--muted); font-size:13px;}

    footer{
      margin-top:46px;
      padding-top:20px;
      border-top:1px solid rgba(255,255,255,.08);
      color:rgba(178,179,189,.9);
      font-size:12px;
      display:flex;
      justify-content:space-between;
      gap:12px;
      flex-wrap:wrap;
    }

    .inputRow{
      display:flex;
      gap:10px;
      flex-wrap:wrap;
      margin-top:12px;
    }
    input[type="email"]{
      flex: 1 1 240px;
      padding:12px 14px;
      border-radius: 999px;
      border:1px solid rgba(255,255,255,.14);
      background: rgba(7,7,11,.6);
      color: var(--text);
      outline:none;
    }
    input[type="email"]::placeholder{color:rgba(178,179,189,.75)}
    input[type="email"]:focus{border-color:rgba(255,212,0,.45)}
    .note{
      font-size:12px;
      color: rgba(178,179,189,.9);
      margin-top:10px;
    }
    .toast{
      position: fixed;
      bottom: 18px;
      left: 50%;
      transform: translateX(-50%);
      background: rgba(14,15,22,.95);
      border: 1px solid rgba(255,255,255,.10);
      border-radius: 999px;
      padding: 10px 14px;
      color: var(--text);
      font-weight: 700;
      font-size: 13px;
      box-shadow: var(--shadow);
      display:none;
      z-index: 999;
    }
  </style>
</head>

<body>
  <div class="wrap">
    <div class="topbar">
      <div class="brand">
        <div class="logo">HH</div>
        <div>
          <h1>The Hobby Hangout</h1>
          <span>Where The Hobby Lives.</span>
        </div>
      </div>

      <div class="nav">
        <a href="#why">Why Join</a>
        <a href="#how">How It Works</a>
        <a href="#faq">FAQ</a>
        <a class="btn" id="joinTop" href="YOUR_DISCORD_INVITE_LINK_HERE" target="_blank" rel="noopener">
          Start 7-Day Free Trial
          <span aria-hidden="true">→</span>
        </a>
      </div>
    </div>

    <section class="hero" id="top">
      <div>
        <div class="kicker"><i></i> Private Discord Marketplace</div>
        <h2 class="headline">Buy. Sell. Trade. <em>Connect.</em></h2>
        <p class="subhead">
          The Hobby Hangout is a private sports card marketplace on Discord built for collectors who want
          faster deals, better conversations, and a community that actually lives the hobby.
        </p>

        <div class="ctaRow">
          <a class="btn" href="YOUR_DISCORD_INVITE_LINK_HERE" target="_blank" rel="noopener">Start 7-Day Free Trial →</a>
          <a class="btn secondary" href="#why">See what’s inside</a>
        </div>
        <div class="micro">No clutter. No endless scrolling. <b>Just hobby-first deals.</b></div>

        <div class="stats">
          <div class="stat">
            <div class="n">7-day</div>
            <div class="l">free trial access</div>
          </div>
          <div class="stat">
            <div class="n">Private</div>
            <div class="l">members-only marketplace</div>
          </div>
          <div class="stat">
            <div class="n">All hobby</div>
            <div class="l">buy/sell/trade + community</div>
          </div>
        </div>
      </div>

      <div class="card panel">
        <div class="tag">
          <svg viewBox="0 0 24 24" aria-hidden="true"><path d="M12 2a7 7 0 0 0-7 7c0 5 7 13 7 13s7-8 7-13a7 7 0 0 0-7-7zm0 9.5A2.5 2.5 0 1 1 12 6a2.5 2.5 0 0 1 0 5.5z"/></svg>
          What you get
        </div>
        <ul class="list">
          <li><b>Buy/Sell/Trade channels</b> built for quick browsing and clean posts</li>
          <li><b>Vouches + community trust</b> to reduce sketchy transactions</li>
          <li><b>Deal flow</b> that moves faster than public platforms</li>
          <li><b>Real collectors</b> talking product, comps, releases, and strategy</li>
          <li><b>Giveaways + perks</b> (optional—add what you actually offer)</li>
        </ul>

        <div class="inputRow" style="margin-top:16px;">
          <input id="email" type="email" placeholder="Get updates (optional email capture)" />
          <button class="btn secondary" id="saveEmail" type="button">Save</button>
        </div>
        <div class="note">
          Email capture is optional. This demo saves locally in your browser—swap it for Mailchimp/ConvertKit later.
        </div>
      </div>
    </section>

    <section class="section" id="why">
      <h2>Why collectors join</h2>
      <div class="grid3">
        <div class="card tile">
          <div class="tag">Curated community</div>
          <h3>Less noise, more signal</h3>
          <p>Private access means fewer low-effort posts and better buying/selling conversations.</p>
        </div>
        <div class="card tile">
          <div class="tag">Faster deals</div>
          <h3>Speed beats scrolling</h3>
          <p>Discord threads + structured channels make it easier to find what you want and move quickly.</p>
        </div>
        <div class="card tile">
          <div class="tag">Trust & accountability</div>
          <h3>Built on reputation</h3>
          <p>Vouches and community norms help create safer transactions than many public groups.</p>
        </div>
      </div>
    </section>

    <section class="section" id="how">
      <h2>How it works</h2>
      <div class="split">
        <div class="card tile">
          <h3>Step-by-step</h3>
          <ol class="list">
            <li>Click <b>Start 7-Day Free Trial</b>.</li>
            <li>Join the Discord and review the posting rules.</li>
            <li>Browse channels to buy/sell/trade and start connecting.</li>
            <li>After the trial, keep access with membership (your pricing/terms).</li>
          </ol>
          <div class="ctaRow" style="margin-top:14px;">
            <a class="btn" href="YOUR_DISCORD_INVITE_LINK_HERE" target="_blank" rel="noopener">Start 7-Day Free Trial →</a>
            <a class="btn secondary" href="#faq">Read FAQ</a>
          </div>
        </div>

        <div class="card tile">
          <h3>Suggested channel structure</h3>
          <ul class="list">
            <li><b>#buy</b> / <b>#sell</b> / <b>#trade</b></li>
            <li><b>#vouches</b> + <b>#rules</b></li>
            <li><b>#comps</b> + <b>#mailday</b></li>
            <li><b>#releases</b> + <b>#rips</b></li>
            <li><b>#support</b> (mods + disputes)</li>
          </ul>
          <p class="note">Swap these to match what you actually run today.</p>
        </div>
      </div>
    </section>

    <section class="section faq" id="faq">
      <h2>FAQ</h2>

      <details>
        <summary>Is this just another Discord?</summary>
        <p>No—this is a <b>marketplace-first</b> Discord with structure, norms, and community trust baked into how deals happen.</p>
      </details>

      <details>
        <summary>What does the 7-day trial include?</summary>
        <p>Full access during the trial. After 7 days, members continue with your paid plan (add pricing/tiers here if you want).</p>
      </details>

      <details>
        <summary>How do you keep deals safe?</summary>
        <p>Use clear rules, vouches, and moderation. You can also require timestamps, set posting templates, and establish dispute steps.</p>
      </details>

      <details>
        <summary>Do you allow all sports?</summary>
        <p>Set your scope here (e.g., baseball, football, basketball, hockey). If you also support TCG, say it explicitly.</p>
      </details>
    </section>

    <footer>
      <div>© <span id="year"></span> The Hobby Hangout. Buy. Sell. Trade. Connect.</div>
      <div style="display:flex; gap:10px; flex-wrap:wrap;">
        <a href="YOUR_TWITTER_OR_INSTAGRAM_LINK" style="opacity:.9">Social</a>
        <a href="mailto:YOUR_SUPPORT_EMAIL" style="opacity:.9">Support</a>
        <a href="#top" style="opacity:.9">Back to top</a>
      </div>
    </footer>
  </div>

  <div class="toast" id="toast"></div>

  <script>
    // Fill year
    document.getElementById("year").textContent = new Date().getFullYear();

    // Optional: "email capture" demo (local-only)
    const toast = (msg) => {
      const el = document.getElementById("toast");
      el.textContent = msg;
      el.style.display = "block";
      clearTimeout(window.__t);
      window.__t = setTimeout(() => el.style.display = "none", 2600);
    };

    document.getElementById("saveEmail").addEventListener("click", () => {
      const email = document.getElementById("email").value.trim();
      if (!email) return toast("Enter an email (optional).");
      const ok = /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email);
      if (!ok) return toast("That email doesn’t look valid.");
      localStorage.setItem("hobbyhangout_email", email);
      toast("Saved. (Demo: stored locally)");
      document.getElementById("email").value = "";
    });

    // Tracking hooks (optional)
    document.querySelectorAll('a[href*="YOUR_DISCORD_INVITE_LINK_HERE"]').forEach(a => {
      a.addEventListener("click", () => {
        // Replace with your analytics call (Meta/GA/etc.)
        console.log("Join clicked");
      });
    });
  </script>
</body>
</html>

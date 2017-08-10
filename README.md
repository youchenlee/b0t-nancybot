## History of NancyBot

Nancybot was part of https://github.com/pcman-bbs/pcmanx project. 

Nancybot is a simple and indenpent chatting robot written in C/C++ in year 2005. It simply uses string partial match to build a huge mapping of chat messages. It treats all unmatched words as unknown messages, and sometimes it ask theses messages out as questions, and learn from our replies. 

In the same year, [we put it into pcmanx](https://github.com/pcman-bbs/pcmanx/commit/fa5ca4907d7431675c13351ecbbc695fd97b44ef) (a.k.a pcmanx-gtk2), a classic telnet/BBS client, to automatically reply incoming waterball (水球, a kind of chat messages in BBS).


To prevent bots chatting with bots, we disable Nancybot by default. So there are many users using pcmanx-gtk2, but only few of them know NancyBot.

## And Today

NancyBot is still stupid and hard to maintain (10 years without enhancing it) compairing to some modern bot engines. But it's now part of [frankbot project](https://github.com/UniSharp/frankbot) at our office, and it brings a lot of fun to our slack channel. :smile:

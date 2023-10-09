#pragma once

#include "ChatCommandTrigger.h"

namespace ai
{
    class ChatTriggerContext : public NamedObjectContext<Trigger>
    {
    public:
        ChatTriggerContext()
        {
            creators["quests"] = &ChatTriggerContext::quests;
            creators["stats"] = &ChatTriggerContext::stats;
            creators["leave"] = &ChatTriggerContext::leave;
            creators["rep"] = &ChatTriggerContext::reputation;
            creators["reputation"] = &ChatTriggerContext::reputation;
            creators["log"] = &ChatTriggerContext::log;
            creators["los"] = &ChatTriggerContext::los;
            creators["line of sight"] = &ChatTriggerContext::los;
            creators["drop"] = &ChatTriggerContext::drop;
            creators["share"] = &ChatTriggerContext::share;
            creators["q"] = &ChatTriggerContext::q;
            creators["query"] = &ChatTriggerContext::q;
            creators["ll"] = &ChatTriggerContext::ll;
            creators["loot list"] = &ChatTriggerContext::ll;
            creators["vl"] = &ChatTriggerContext::vl;
            creators["vendor list"] = &ChatTriggerContext::vl;
            creators["ss"] = &ChatTriggerContext::ss;
            creators["skip spell"] = &ChatTriggerContext::ss;
            creators["loot all"] = &ChatTriggerContext::loot_all;
            creators["add all loot"] = &ChatTriggerContext::loot_all;
            creators["release"] = &ChatTriggerContext::release;
            creators["teleport"] = &ChatTriggerContext::teleport;
            creators["taxi"] = &ChatTriggerContext::taxi;
            creators["repair"] = &ChatTriggerContext::repair;
            creators["u"] = &ChatTriggerContext::use;
            creators["use"] = &ChatTriggerContext::use;
            creators["o"] = &ChatTriggerContext::open;
            creators["open"] = &ChatTriggerContext::open;
            creators["use"] = &ChatTriggerContext::use;
            creators["c"] = &ChatTriggerContext::item_count;
            creators["count"] = &ChatTriggerContext::item_count;
            creators["e"] = &ChatTriggerContext::equip;
            creators["equip"] = &ChatTriggerContext::equip;
            creators["ue"] = &ChatTriggerContext::uneqip;
            creators["unequip"] = &ChatTriggerContext::uneqip;
            creators["s"] = &ChatTriggerContext::sell;
            creators["sell"] = &ChatTriggerContext::sell;
            creators["b"] = &ChatTriggerContext::buy;
            creators["buy"] = &ChatTriggerContext::buy;
            creators["r"] = &ChatTriggerContext::reward;
            creators["reward"] = &ChatTriggerContext::reward;
            creators["t"] = &ChatTriggerContext::trade;
            creators["trade"] = &ChatTriggerContext::trade;
            creators["nt"] = &ChatTriggerContext::nontrade;
            creators["non trade"] = &ChatTriggerContext::nontrade;
            creators["talents"] = &ChatTriggerContext::talents;
            creators["spells"] = &ChatTriggerContext::spells;
            creators["co"] = &ChatTriggerContext::co;
            creators["combat"] = &ChatTriggerContext::co;
            creators["nc"] = &ChatTriggerContext::nc;
            creators["non combat"] = &ChatTriggerContext::nc;
            creators["ds"] = &ChatTriggerContext::ds;
            creators["dead"] = &ChatTriggerContext::ds;
            creators["trainer"] = &ChatTriggerContext::trainer;
            creators["attack"] = &ChatTriggerContext::attack;
            creators["chat"] = &ChatTriggerContext::chat;
            creators["accept"] = &ChatTriggerContext::accept;
            creators["home"] = &ChatTriggerContext::home;
            creators["reset ai"] = &ChatTriggerContext::reset_ai;
            creators["destroy"] = &ChatTriggerContext::destroy;
            creators["emote"] = &ChatTriggerContext::emote;
            creators["buff"] = &ChatTriggerContext::buff;
            creators["help"] = &ChatTriggerContext::help;
            creators["gb"] = &ChatTriggerContext::gb;
            creators["bank"] = &ChatTriggerContext::bank;
            creators["follow"] = &ChatTriggerContext::follow;
            creators["stay"] = &ChatTriggerContext::stay;
            creators["flee"] = &ChatTriggerContext::flee;
            creators["grind"] = &ChatTriggerContext::grind;
            creators["tank attack"] = &ChatTriggerContext::tank_attack;
            creators["talk"] = &ChatTriggerContext::talk;
            creators["cast"] = &ChatTriggerContext::cast;
            creators["invite"] = &ChatTriggerContext::invite;
            creators["spell"] = &ChatTriggerContext::spell;
            creators["rti"] = &ChatTriggerContext::rti;
            creators["revive"] = &ChatTriggerContext::revive;
            creators["runaway"] = &ChatTriggerContext::runaway;
            creators["warning"] = &ChatTriggerContext::warning;
            creators["position"] = &ChatTriggerContext::position;
            creators["summon"] = &ChatTriggerContext::summon;
            creators["who"] = &ChatTriggerContext::who;
            creators["save mana"] = &ChatTriggerContext::save_mana;
            creators["max dps"] = &ChatTriggerContext::max_dps;
            creators["attackers"] = &ChatTriggerContext::attackers;
            creators["formation"] = &ChatTriggerContext::formation;
            creators["stance"] = &ChatTriggerContext::stance;
            creators["sendmail"] = &ChatTriggerContext::sendmail;
            creators["mail"] = &ChatTriggerContext::mail;
            creators["outfit"] = &ChatTriggerContext::outfit;
            creators["go"] = &ChatTriggerContext::go;
            creators["ready"] = &ChatTriggerContext::ready_check;
            creators["debug"] = &ChatTriggerContext::debug;
            creators["cs"] = &ChatTriggerContext::cs;
            creators["custom"] = &ChatTriggerContext::cs;
            creators["wts"] = &ChatTriggerContext::wts;
            creators["hire"] = &ChatTriggerContext::hire;
            creators["craft"] = &ChatTriggerContext::craft;
            creators["flag"] = &ChatTriggerContext::craft;
            creators["range"] = &ChatTriggerContext::range;
            creators["ra"] = &ChatTriggerContext::ra;
            creators["remove aura"] = &ChatTriggerContext::ra;
            creators["ah"] = &ChatTriggerContext::ah;
            creators["auction"] = &ChatTriggerContext::ah;
        }

    private:
        static Trigger* ah(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ah"); }
        static Trigger* ra(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ra"); }
        static Trigger* range(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "range"); }
        static Trigger* flag(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "flag"); }
        static Trigger* craft(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "craft"); }
        static Trigger* hire(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "hire"); }
        static Trigger* wts(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "wts"); }
        static Trigger* cs(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "cs"); }
        static Trigger* debug(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "debug"); }
        static Trigger* go(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "go"); }
        static Trigger* outfit(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "outfit"); }
        static Trigger* mail(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "mail"); }
        static Trigger* sendmail(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "sendmail"); }
        static Trigger* formation(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "formation"); }
        static Trigger* stance(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "stance"); }
        static Trigger* attackers(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "attackers"); }
        static Trigger* max_dps(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "max dps"); }
        static Trigger* save_mana(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "save mana"); }
        static Trigger* who(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "who"); }
        static Trigger* summon(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "summon"); }
        static Trigger* position(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "position"); }
        static Trigger* runaway(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "runaway"); }
        static Trigger* warning(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "warning"); }
        static Trigger* revive(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "revive"); }
        static Trigger* rti(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "rti"); }
        static Trigger* invite(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "invite"); }
        static Trigger* cast(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "cast"); }
        static Trigger* talk(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "talk"); }
        static Trigger* flee(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "flee"); }
        static Trigger* grind(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "grind"); }
        static Trigger* tank_attack(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "tank attack"); }
        static Trigger* stay(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "stay"); }
        static Trigger* follow(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "follow"); }
        static Trigger* gb(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "gb"); }
        static Trigger* bank(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "bank"); }
        static Trigger* help(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "help"); }
        static Trigger* buff(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "buff"); }
        static Trigger* emote(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "emote"); }
        static Trigger* destroy(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "destroy"); }
        static Trigger* home(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "home"); }
        static Trigger* accept(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "accept"); }
        static Trigger* chat(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "chat"); }
        static Trigger* attack(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "attack"); }
        static Trigger* trainer(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "trainer"); }
        static Trigger* co(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "co"); }
        static Trigger* nc(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "nc"); }
        static Trigger* ds(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ds"); }
        static Trigger* spells(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "spells"); }
        static Trigger* talents(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "talents"); }
        static Trigger* equip(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "e"); }
        static Trigger* uneqip(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ue"); }
        static Trigger* sell(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "s"); }
        static Trigger* buy(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "b"); }
        static Trigger* reward(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "r"); }
        static Trigger* trade(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "t"); }
        static Trigger* nontrade(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "nt"); }

        static Trigger* item_count(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "c"); }
        static Trigger* use(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "use"); }
        static Trigger* open(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "open"); }
        static Trigger* repair(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "repair"); }
        static Trigger* taxi(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "taxi"); }
        static Trigger* teleport(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "teleport"); }
        static Trigger* q(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "q"); }
        static Trigger* ll(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ll"); }
        static Trigger* vl(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "vl"); }
        static Trigger* ss(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ss"); }
        static Trigger* drop(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "drop"); }
        static Trigger* share(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "share"); }
        static Trigger* quests(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "quests"); }
        static Trigger* stats(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "stats"); }
        static Trigger* leave(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "leave"); }
        static Trigger* reputation(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "reputation"); }
        static Trigger* log(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "log"); }
        static Trigger* los(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "los"); }
        static Trigger* loot_all(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "add all loot"); }
        static Trigger* release(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "release"); }
        static Trigger* reset_ai(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "reset ai"); }
        static Trigger* spell(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "spell"); }
        static Trigger* ready_check(PlayerbotAI* ai) { return new ChatCommandTrigger(ai, "ready check"); }
    };
};

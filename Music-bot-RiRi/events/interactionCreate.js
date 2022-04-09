module.exports = (client, int) => {
    if (!int.isButton()) return;

    const queue = player.getQueue(int.guildId);

    switch (int.customId) {
        case 'saveTrack': {
            if (!queue || !queue.playing) return int.reply({ content: `Koi gaana nahi chal raha abhi... dubara try crow :) ❌`, ephemeral: true, components: [] });

            int.member.send(`Aapne save kar liya track ${queue.current.title} | ${queue.current.author} server se :) ${int.member.guild.name} ✅`).then(() => {
                return int.reply({ content: `Maine tujhe send kar diya track private messages par :) i love u bol dena RiRi ko bas :) ✅`, ephemeral: true, components: [] });
            }).catch(error => {
                return int.reply({ content: `mai msg nahi kar pa raha tujhe private par ❌`, ephemeral: true, components: [] });
            });
        }
    }
};
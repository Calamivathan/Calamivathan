const maxVol = client.config.opt.maxVol;

module.exports = {
    name: 'volume',
    aliases: ['vol'],
    utilisation: `{prefix}volume [1-${maxVol}]`,
    voiceChannel: true,

    execute(client, message, args) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        const vol = parseInt(args[0]);

        if (!vol) return message.channel.send(`Abhi volume ${queue.volume} 🔊\n*Change karne k liye vloume enter kar **1** and **${maxVol}**.*`);

        if (queue.volume === vol) return message.channel.send(`Abe chutad phele se hi yahi h volume ${message.author}... try again ? ❌`);

        if (vol < 0 || vol > maxVol) return message.channel.send(`Ye valid number nahi h -_- fir se dal **1** and **${maxVol}** ${message.author}... try again ? ❌`);

        const success = queue.setVolume(vol);

        return message.channel.send(success ? `kar di change volume **${vol}**/**${maxVol}**% 🔊` : `Something went wrong ${message.author}... try again ? ❌`);
    },
};
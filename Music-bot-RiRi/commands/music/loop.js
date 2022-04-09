const { QueueRepeatMode } = require('discord-player');

module.exports = {
    name: 'loop',
    aliases: ['lp', 'repeat'],
    utilisation: '{prefix}loop <queue>',
    voiceChannel: true,

    execute(client, message, args) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        if (args.join('').toLowerCase() === 'queue') {
            if (queue.repeatMode === 1) return message.channel.send(`Phele iss gaane ko loop se hata :) (${client.config.app.px}loop) ${message.author}... try again ? ❌`);

            const success = queue.setRepeatMode(queue.repeatMode === 0 ? QueueRepeatMode.QUEUE : QueueRepeatMode.OFF);

            return message.channel.send(success ? `Repeat mode **${queue.repeatMode === 0 ? 'disabled' : 'enabled'}** Puri queue loop ho jaygi ab endlessly :) 🔁` : `Something went wrong ${message.author}... try again ? ❌`);
        } else {
            if (queue.repeatMode === 2) return message.channel.send(`phele iss queue ko loop se hata (${client.config.app.px}loop queue) ${message.author}... try again ? ❌`);

            const success = queue.setRepeatMode(queue.repeatMode === 0 ? QueueRepeatMode.TRACK : QueueRepeatMode.OFF);

            return message.channel.send(success ? `Repeat mode **${queue.repeatMode === 0 ? 'disabled' : 'enabled'}** ye wala music loop m gaya ab :) (Queue ko loop m dalne k liye ye use kar <queue> option) 🔂` : `Something went wrong ${message.author}... try again ? ❌`);
        };
    },
};
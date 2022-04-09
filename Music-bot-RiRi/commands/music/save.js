module.exports = {
    name: 'save',
    aliases: ['sv'],
    utilisation: '{prefix}save',
    voiceChannel: true,

    async execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        message.author.send(`You saved the track ${queue.current.title} | ${queue.current.author} from the server ${message.guild.name} ✅`).then(() => {
            message.channel.send(`Mine send kar diya tujhe song private msg par :) ✅`);
        }).catch(error => {
            message.channel.send(`M send nahi kar pa raha msg private par :) ${message.author}... try again ? ❌`);
        });
    },
};
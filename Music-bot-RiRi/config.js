module.exports = {
    app: {
        px: 'xxx',
        token: 'OTYyMDE2MDAwNjY3MTY0NzQy.YlBZNw.TAywL3lAPFNe_Mn-032PFX3skrA',
        playing: 'by RiRi :)'
    },

    opt: {
        DJ: {
            enabled: false,
            roleName: 'RiRi Official',
            commands: ['back', 'clear', 'filter', 'loop', 'pause', 'resume', 'seek', 'shuffle', 'skip', 'stop', 'volume']
        },
        maxVol: 100,
        loopMessage: false,
        discordPlayer: {
            ytdlOptions: {
                quality: 'highestaudio',
                highWaterMark: 1 << 25
            }
        }
    }
};

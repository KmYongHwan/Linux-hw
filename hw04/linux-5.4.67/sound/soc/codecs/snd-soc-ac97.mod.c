#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x386334c0, "soc_ac97_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0xe18576ad, "snd_ac97_set_rate" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-soc-core");


MODULE_INFO(srcversion, "CE5CC0FCB918EACD8777DF4");

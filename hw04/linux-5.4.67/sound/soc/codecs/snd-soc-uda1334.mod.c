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
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-soc-core");

MODULE_ALIAS("of:N*T*Cnxp,uda1334");
MODULE_ALIAS("of:N*T*Cnxp,uda1334C*");

MODULE_INFO(srcversion, "743F9F5CB9161B9048406B7");

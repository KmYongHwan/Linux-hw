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
	{ 0x9680192c, "devm_snd_soc_register_card" },
	{ 0x3bde82d6, "snd_soc_pm_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x65e7a553, "asoc_simple_init_priv" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb7e0c925, "asoc_simple_init_jack" },
	{ 0x6ffcb8da, "asoc_simple_dai_init" },
	{ 0x3b974611, "asoc_simple_clean_reference" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "4C7B33D27BA17EE899DFB41");

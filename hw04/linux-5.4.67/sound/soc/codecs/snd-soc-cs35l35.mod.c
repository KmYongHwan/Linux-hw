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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf5a9f5b4, "snd_soc_get_volsw_sx" },
	{ 0xf60888f1, "regmap_register_patch" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x9987a748, "snd_soc_info_volsw_sx" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0xdd450d90, "snd_soc_add_component_controls" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x29361773, "complete" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9ee4749c, "snd_soc_put_volsw_sx" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Ccirrus,cs35l35");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l35C*");
MODULE_ALIAS("i2c:cs35l35");

MODULE_INFO(srcversion, "96FD62B6D857A9718903434");

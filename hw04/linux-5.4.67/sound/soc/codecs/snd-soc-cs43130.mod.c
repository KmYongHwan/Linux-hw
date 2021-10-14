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
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe718cc33, "snd_soc_card_jack_new" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x96848186, "scnprintf" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0x29361773, "complete" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:cs43130");
MODULE_ALIAS("i2c:cs4399");
MODULE_ALIAS("i2c:cs43131");
MODULE_ALIAS("i2c:cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198C*");

MODULE_INFO(srcversion, "03F2C24C80B8AF2AD87245A");

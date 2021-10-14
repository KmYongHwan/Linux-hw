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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xf60888f1, "regmap_register_patch" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x6733e8b8, "handle_edge_irq" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc59e090f, "regmap_reinit_cache" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x521d5d13, "regulator_bulk_get" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdcca3259, "gpiod_get_raw_value_cansleep" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x1b7d4dbf, "regcache_sync_region" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xff426c78, "regulator_bulk_free" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x1a22166d, "irq_domain_xlate_twocell" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwlf,wm1811");
MODULE_ALIAS("of:N*T*Cwlf,wm1811C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994");
MODULE_ALIAS("of:N*T*Cwlf,wm8994C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm8958C*");
MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");

MODULE_INFO(srcversion, "EA6F5B2155872C5BD19406C");

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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq24735");
MODULE_ALIAS("of:N*T*Cti,bq24735C*");
MODULE_ALIAS("i2c:bq24735-charger");

MODULE_INFO(srcversion, "E681F8F33572B5C574155EE");

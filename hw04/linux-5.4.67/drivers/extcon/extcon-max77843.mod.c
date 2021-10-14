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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max77843-muic");

MODULE_INFO(srcversion, "B884844062BF7F4974178FA");

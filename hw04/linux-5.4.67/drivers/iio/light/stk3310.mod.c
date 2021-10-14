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
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Csensortek,stk3310");
MODULE_ALIAS("of:N*T*Csensortek,stk3310C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3311");
MODULE_ALIAS("of:N*T*Csensortek,stk3311C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3335");
MODULE_ALIAS("of:N*T*Csensortek,stk3335C*");
MODULE_ALIAS("acpi*:STK3310:*");
MODULE_ALIAS("acpi*:STK3311:*");
MODULE_ALIAS("acpi*:STK3335:*");
MODULE_ALIAS("i2c:STK3310");
MODULE_ALIAS("i2c:STK3311");
MODULE_ALIAS("i2c:STK3335");

MODULE_INFO(srcversion, "195C0834FCD399DB9F05C0F");

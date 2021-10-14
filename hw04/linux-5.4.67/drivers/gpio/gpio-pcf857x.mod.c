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
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb26995d, "gpiochip_set_nested_irqchip" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0xc07c9d98, "handle_level_irq" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "863B39C6E4EFECC3961909A");

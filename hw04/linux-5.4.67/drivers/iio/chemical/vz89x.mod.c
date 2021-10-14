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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:vz89x");
MODULE_ALIAS("i2c:vz89te");
MODULE_ALIAS("of:N*T*Csgx,vz89x");
MODULE_ALIAS("of:N*T*Csgx,vz89xC*");
MODULE_ALIAS("of:N*T*Csgx,vz89te");
MODULE_ALIAS("of:N*T*Csgx,vz89teC*");

MODULE_INFO(srcversion, "7CCF6F42387FD4C8D1DDCE9");

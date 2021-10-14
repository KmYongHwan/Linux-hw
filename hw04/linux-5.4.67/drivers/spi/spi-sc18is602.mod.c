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
	{ 0x8271648f, "spi_finalize_current_message" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x7ea19302, "put_device" },
	{ 0x4ebbffb7, "devm_spi_register_controller" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,sc18is602");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602C*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602b");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602bC*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603C*");
MODULE_ALIAS("i2c:sc18is602");
MODULE_ALIAS("i2c:sc18is602b");
MODULE_ALIAS("i2c:sc18is603");

MODULE_INFO(srcversion, "3D9E10659051CCC5262A1BC");

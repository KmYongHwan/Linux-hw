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
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0xeaa470a4, "irq_domain_simple_ops" },
	{ 0x347390e3, "i2c_get_device_id" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x969d057e, "__i2c_smbus_xfer" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "76FE7E77C9AD5840DBE20C8");

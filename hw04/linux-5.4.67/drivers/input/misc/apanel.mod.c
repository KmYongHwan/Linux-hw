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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xc5850110, "printk" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("i2c:fujitsu_apanel");

MODULE_INFO(srcversion, "FBDD0F20AF6F49F5C9C9066");

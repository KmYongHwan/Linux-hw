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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,crc8");

MODULE_ALIAS("spi:ad7280a");

MODULE_INFO(srcversion, "03286180C78D901922B50C7");

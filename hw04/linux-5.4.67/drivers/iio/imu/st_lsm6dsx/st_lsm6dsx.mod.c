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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xcc80f31e, "devm_iio_kfifo_allocate" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");


MODULE_INFO(srcversion, "B5479FAE9033A681880F01F");

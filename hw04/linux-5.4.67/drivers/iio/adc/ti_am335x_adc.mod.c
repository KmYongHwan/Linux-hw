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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6fe197d, "iio_kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdfa89e17, "dma_request_chan" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0x75063c2e, "iio_kfifo_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa542eca, "am335x_tsc_se_adc_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x50f1f900, "am335x_tsc_se_set_once" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa6c74fc, "am335x_tsc_se_clr" },
	{ 0xf14aa8d2, "am335x_tsc_se_set_cache" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio,ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-adc");
MODULE_ALIAS("of:N*T*Cti,am3359-adcC*");

MODULE_INFO(srcversion, "5664726A91C01E351A62DE8");

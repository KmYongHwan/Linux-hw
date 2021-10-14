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
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x42cde89, "smscore_start_device" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x8afae365, "smscore_set_board_id" },
	{ 0xae870b6a, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xf1d8fca7, "smscore_getbuffer" },
	{ 0x5407396, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xe972a9b1, "smscore_unregister_device" },
	{ 0x53dc8d88, "smscore_putbuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smsmdtv");

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "57CB2AF9EB419F35741F95E");

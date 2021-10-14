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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x3cb93f27, "lbs_stop_card" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x8572594c, "lbs_start_card" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x24f4d5ff, "lbs_queue_event" },
	{ 0x40737074, "lbs_get_firmware_async" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xe28d1625, "lbs_remove_card" },
	{ 0xb27c7cec, "lbs_process_rxed_packet" },
	{ 0x33c2dd7d, "lbs_host_to_card_done" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x848d372e, "iowrite8" },
	{ 0xef991bdd, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9f95e9a4, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "pcmcia,libertas");

MODULE_ALIAS("pcmcia:m02DBc8103f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DBc6064f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02DFc8103f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "EDDF6D269978A30118DF4A1");

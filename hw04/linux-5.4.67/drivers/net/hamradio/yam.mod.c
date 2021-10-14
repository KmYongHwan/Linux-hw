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
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x3785c132, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xede283d, "release_firmware" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x71deb539, "request_firmware" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x69acdf38, "memcpy" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa2e9cf72, "ax25_ip_xmit" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xd444fe9, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc4142837, "seq_printf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "19DD65839C12BB08965D8E7");

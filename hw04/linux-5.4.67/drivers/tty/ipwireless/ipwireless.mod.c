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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x893a6298, "ppp_unit_number" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x983f550b, "pcmcia_reset_card" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b255d77, "ppp_unregister_channel" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x52269f88, "ppp_output_wakeup" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x41aeb27c, "pcmcia_request_window" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b0d23cd, "tty_vhangup" },
	{ 0xb18156be, "skb_pull" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0xd5151b8b, "tty_perform_flush" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0x6d1d72a0, "pcmcia_map_mem_page" },
	{ 0xedc03953, "iounmap" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8cc87a7f, "ppp_register_channel" },
	{ 0xad09e14f, "ppp_channel_index" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "pcmcia,pcmcia_core");

MODULE_ALIAS("pcmcia:m02F2c0100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02F2c0200f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "8C90B1E5C75472040D6A236");

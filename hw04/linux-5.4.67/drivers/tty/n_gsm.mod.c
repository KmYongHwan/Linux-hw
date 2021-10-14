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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0xebbb29c, "tty_register_device" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x421bd017, "n_tty_ioctl_helper" },
	{ 0xf035ff48, "tty_port_lower_dtr_rts" },
	{ 0x26d6836d, "tty_port_close_end" },
	{ 0xef6f5e7c, "tty_port_close_start" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x49548c2e, "tty_port_install" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x12998a38, "tty_port_put" },
	{ 0xba312d7b, "current_task" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x47dee78, "skb_dequeue_tail" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf26e4dd0, "tty_port_block_til_ready" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3c59680b, "tty_write_room" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x9e351c2a, "tty_hung_up_p" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe113153b, "tty_name" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E313248EBB1F0BB307A2B71");

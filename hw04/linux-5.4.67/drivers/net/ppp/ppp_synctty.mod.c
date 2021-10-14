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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x8b255d77, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbe58e8ca, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xcdcc7c53, "tty_mode_ioctl" },
	{ 0x421bd017, "n_tty_ioctl_helper" },
	{ 0xad09e14f, "ppp_channel_index" },
	{ 0x893a6298, "ppp_unit_number" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cc87a7f, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x52269f88, "ppp_output_wakeup" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0x3e84d551, "ppp_input_error" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x963dcba1, "_raw_spin_trylock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x29361773, "complete" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A72E539EA0EBC4BD96B74D8");

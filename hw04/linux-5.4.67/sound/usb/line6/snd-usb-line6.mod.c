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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa12eb18, "snd_rawmidi_transmit_peek" },
	{ 0x201e44f1, "snd_hwdep_new" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xf2f8507a, "usb_urb_ep_type_check" },
	{ 0x65523885, "snd_card_new" },
	{ 0x443b0535, "snd_pcm_hw_constraint_ratdens" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xc49090a, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x583a430e, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd,snd-hwdep");


MODULE_INFO(srcversion, "5402DC375015E9D202EC60B");

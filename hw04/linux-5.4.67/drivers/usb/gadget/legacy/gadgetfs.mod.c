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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x7545c1c3, "get_tree_single" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0x41b0b9cc, "dput" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5e8c4430, "dup_iter" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe16a6075, "d_add" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x8fe657b9, "usb_gadget_unregister_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x446af8d8, "d_delete" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xcd0e4f76, "use_mm" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x5400fe6f, "usb_gadget_vbus_draw" },
	{ 0x64042456, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a2be4e, "kiocb_set_cancel_fn" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf27c5dd8, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x28cb7cef, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x638c7869, "current_time" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0x3b2d0364, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x2947182d, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc1e4ce16, "unuse_mm" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0x48b84203, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "1130B5EBA94CF3A5BD1F7E9");

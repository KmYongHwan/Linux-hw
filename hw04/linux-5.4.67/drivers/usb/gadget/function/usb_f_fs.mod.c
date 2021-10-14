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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0x41b0b9cc, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5e8c4430, "dup_iter" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe16a6075, "d_add" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x446af8d8, "d_delete" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7698059, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xcd0e4f76, "use_mm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xa916b694, "strnlen" },
	{ 0x64042456, "simple_dir_operations" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xeb5989ef, "get_tree_nodev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7470693f, "fs_parse" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x19a2be4e, "kiocb_set_cancel_fn" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4f541592, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x28cb7cef, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x638c7869, "current_time" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0xee3124a4, "sg_alloc_table_from_pages" },
	{ 0x3b2d0364, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x2947182d, "new_inode" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xc1e4ce16, "unuse_mm" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0x48b84203, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1bcaec2b, "usb_string_ids_n" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "udc-core,libcomposite");


MODULE_INFO(srcversion, "BA20C9B0137C1FAA1DBA60C");

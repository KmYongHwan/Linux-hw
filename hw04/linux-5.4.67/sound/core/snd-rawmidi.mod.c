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
	{ 0xf9a482f9, "msleep" },
	{ 0x117adf18, "put_pid" },
	{ 0x444d0c5f, "snd_register_device" },
	{ 0xdf8c165a, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc2e79173, "snd_card_file_remove" },
	{ 0xeac8bab7, "pid_vnr" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xaaec386f, "snd_device_initialize" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x6587202e, "snd_info_create_card_entry" },
	{ 0x86cf3d8e, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe5a9a51b, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9af239ca, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8bc0870, "compat_put_timespec" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf720a60b, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa876716e, "snd_card_file_add" },
	{ 0x170680dc, "snd_ctl_register_ioctl" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb7ab7bcd, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x101846c7, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x66cf9a80, "snd_info_free_entry" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x30dce6ac, "snd_ctl_get_preferred_subdevice" },
	{ 0x58eb40d, "snd_seq_device_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60cde65, "snd_ctl_unregister_ioctl_compat" },
	{ 0xce30b9d3, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "B5260E2D42C8CD599277D5B");

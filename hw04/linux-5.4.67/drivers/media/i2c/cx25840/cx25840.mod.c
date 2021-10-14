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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xede283d, "release_firmware" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "1013273EBF495E98A1DFEE4");
